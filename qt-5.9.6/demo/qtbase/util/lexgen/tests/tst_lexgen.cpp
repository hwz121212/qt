#include "global.h"
#include "re2nfa.h"
#include "generator.h"
#include "configfile.h"
#include "nfa.h"
#include "qtestcase.h"
#include "tst_lexgen.h"

#include <QtTest/QtTest>


void tst_LexGen::nfa_singleInput()
{
    NFA nfa = NFA::createSingleInputNFA('a');

    QCOMPARE(nfa.initialState, 0);
    QCOMPARE(nfa.finalState, 1);

    QCOMPARE(nfa.states.count(), 2);

    QCOMPARE(nfa.states.at(0).transitions.count(), 1);
    QVERIFY(nfa.states.at(0).transitions.contains('a'));
    QCOMPARE(nfa.states.at(0).transitions.values('a').count(), 1);
    QCOMPARE(nfa.states.at(0).transitions.value('a'), nfa.finalState);

    QVERIFY(nfa.states.at(1).transitions.isEmpty());
}

void tst_LexGen::nfa_alternating()
{
    NFA a = NFA::createSingleInputNFA('a');
    NFA b = NFA::createSingleInputNFA('b');
    NFA nfa = NFA::createAlternatingNFA(a, b);

    const int initialA = 1;
    const int finalA = 2;

    const int initialB = 3;
    const int finalB = 4;

    QCOMPARE(nfa.states.count(), 6);

    QCOMPARE(nfa.initialState, 0);
    QCOMPARE(nfa.finalState, 5);

    QList<int> initialTransitions = nfa.states.at(0).transitions.values(Epsilon);
    QCOMPARE(initialTransitions.count(), 2);
    QVERIFY(initialTransitions.contains(initialA));
    QVERIFY(initialTransitions.contains(initialB));

    // no need to test the individual a and b NFAs, the other
    // autotest already takes care of that. Just check whether
    // the epsilon transitions to the final state exist.

    QCOMPARE(nfa.states.at(finalA).transitions.count(), 1);
    QCOMPARE(nfa.states.at(finalA).transitions.values(Epsilon).count(), 1);
    QCOMPARE(nfa.states.at(finalA).transitions.value(Epsilon), nfa.finalState);

    QCOMPARE(nfa.states.at(finalB).transitions.count(), 1);
    QCOMPARE(nfa.states.at(finalB).transitions.values(Epsilon).count(), 1);
    QCOMPARE(nfa.states.at(finalB).transitions.value(Epsilon), nfa.finalState);
}

void tst_LexGen::nfa_concatenating()
{
    NFA a = NFA::createSingleInputNFA('a');
    NFA b = NFA::createSingleInputNFA('b');
    NFA nfa = NFA::createConcatenatingNFA(a, b);

    const int initialA = 1;
    const int finalA = 2;

    const int initialB = 3;
    const int finalB = 4;

    QCOMPARE(nfa.states.count(), 6);

    QCOMPARE(nfa.initialState, 0);
    QCOMPARE(nfa.finalState, 5);

    QCOMPARE(nfa.states.at(0).transitions.count(), 1);
    QCOMPARE(nfa.states.at(0).transitions.values(Epsilon).count(), 1);
    QCOMPARE(nfa.states.at(0).transitions.value(Epsilon), initialA);

    QCOMPARE(nfa.states.at(finalA).transitions.values(Epsilon).count(), 1);
    QCOMPARE(nfa.states.at(finalA).transitions.value(Epsilon), initialB);

    QCOMPARE(nfa.states.at(finalB).transitions.values(Epsilon).count(), 1);
    QCOMPARE(nfa.states.at(finalB).transitions.value(Epsilon), nfa.finalState);
}

void tst_LexGen::nfa_optional()
{
    NFA a = NFA::createSingleInputNFA('a');
    NFA nfa = NFA::createOptionalNFA(a);

    const int initialA = 1;
    const int finalA = 2;

    QCOMPARE(nfa.states.count(), 4);

    QCOMPARE(nfa.initialState, 0);
    QCOMPARE(nfa.finalState, 3);

    QCOMPARE(nfa.states.at(0).transitions.count(), 2);
    QList<int> initialTransitions = nfa.states.at(0).transitions.values(Epsilon);
    QVERIFY(initialTransitions.contains(nfa.finalState));
    QVERIFY(initialTransitions.contains(initialA));

    QList<int> finalEpsilonATransitions = nfa.states.at(finalA).transitions.values(Epsilon);
    QVERIFY(finalEpsilonATransitions.contains(initialA));
    QVERIFY(finalEpsilonATransitions.contains(nfa.finalState));
}

Q_DECLARE_METATYPE(NFA);
Q_DECLARE_METATYPE(DFA);

void tst_LexGen::nfa_toDFA_data()
{
    QTest::addColumn<NFA>("nfa");
    QTest::addColumn<DFA>("expectedDFA");

    NFA a = NFA::createSingleInputNFA('a');
    NFA b = NFA::createSingleInputNFA('b');
    NFA c = NFA::createSingleInputNFA('c');

    NFA nfa;
    DFA dfa;

    dfa.clear();
    dfa.resize(3);
    dfa[0].transitions.insert('a', 1);
    dfa[1].transitions.insert('b', 2);

    nfa = NFA::createConcatenatingNFA(a, b);

    QTest::newRow("simple concat") << nfa << dfa;

    dfa.clear();
    dfa.resize(3);
    dfa[0].transitions.insert('a', 1);
    dfa[0].transitions.insert('b', 2);

    nfa = NFA::createAlternatingNFA(a, b);

    QTest::newRow("simple alternate") << nfa << dfa;

}

void tst_LexGen::nfa_toDFA()
{
    QFETCH(NFA, nfa);
    QFETCH(DFA, expectedDFA);

    DFA dfa = nfa.toDFA();

    QCOMPARE(dfa.count(), expectedDFA.count());
    for (int i = 0; i < dfa.count(); ++i) {
        if (dfa.at(i).transitions != expectedDFA.at(i).transitions) {
            qDebug() << "DFAs differ in state" << i;
            qDebug() << "NFA:";
            nfa.debug();
            qDebug() << "Actual DFA:";
            dfa.debug();
            qDebug() << "Expected DFA:";
            expectedDFA.debug();
            QVERIFY(false);
        }
    }
}

void tst_LexGen::lexgen_data()
{
    QTest::addColumn<QString>("ruleFile");
    QTest::addColumn<QString>("input");
    QTest::addColumn<QString>("expectedOutput");

    QDir d(QString(SRCDIR));
    d.cd("testdata");
    foreach (QString test, d.entryList(QDir::Dirs | QDir::NoDotAndDotDot)) {
        QString dir = d.absoluteFilePath(test) + '/';
        QTest::newRow(qPrintable(test))
            << dir + "rules.lexgen"
            << dir + "input"
            << dir + "output"
            ;
    }
}

struct Symbol
{
	QString token;
	QString lexem;
};

static QList<Symbol> tokenize(const DFA &dfa, const QString &input, Config *cfg, bool *ok = 0)
{
	QList<Symbol> symbols;
	Symbol lastSymbol;
	int state = 0;
	int lastAcceptingState = -1;
	QString lastAcceptingLexem;
	int lastAcceptingPos = -1;
	for (int i = 0; i < input.length(); ++i) {
		QChar ch = input.at(i);
		QChar chForInput = ch;
		if (cfg->caseSensitivity == Qt::CaseInsensitive)
			chForInput = chForInput.toLower();
		int next = dfa.at(state).transitions.value(chForInput.unicode());
		if (cfg->debug)
			qDebug() << "input" << input.at(i) << "leads to state" << next;
		if (next) {
			lastSymbol.lexem.append(input.at(i));
			lastSymbol.token = dfa.at(next).symbol;
			if (!lastSymbol.token.isEmpty()) {
				lastAcceptingState = next;
				lastAcceptingLexem = lastSymbol.lexem;
				lastAcceptingPos = i;
			}
			state = next;
		}
		else {
			if (lastAcceptingState != -1) {
				if (cfg->debug)
					qDebug() << "adding" << dfa.at(lastAcceptingState).symbol << "and backtracking to" << lastAcceptingPos;
				Symbol s;
				s.token = dfa.at(lastAcceptingState).symbol;
				s.lexem = lastAcceptingLexem;
				symbols << s;
				lastSymbol = Symbol();
				state = 0;
				i = lastAcceptingPos;
				lastAcceptingPos = -1;
				lastAcceptingState = -1;
				continue;
			}
			if (state == 0 || lastSymbol.token.isEmpty()) {
				if (cfg->debug)
					qDebug() << "invalid input";
				if (ok)
					*ok = false;
				return symbols;
			}
			if (cfg->debug)
				qDebug() << "appending symbol with token" << lastSymbol.token;
			symbols << lastSymbol;
			lastSymbol = Symbol();
			state = 0;
			lastAcceptingState = -1;
			--i;
		}
	}
	if (!lastSymbol.token.isEmpty()) {
		if (cfg->debug)
			qDebug() << "appending (last) symbol with token" << lastSymbol.token;
		symbols << lastSymbol;
	}
	else if (lastAcceptingState != -1) {
		if (cfg->debug)
			qDebug() << "appending last accepting state with token" << dfa.at(lastAcceptingState).symbol;
		Symbol s;
		s.lexem = lastAcceptingLexem;
		s.token = dfa.at(lastAcceptingState).symbol;
		symbols << s;
	}
	if (ok)
		*ok = true;
	return symbols;
}

static QSet<InputType> determineMaxInputSet(const ConfigFile::Section &section)
{
	QSet<InputType> set;

	QString inputTypeName;

	foreach(const ConfigFile::Entry &entry, section)
		if (entry.key == QLatin1String("InputType")) {
			if (!inputTypeName.isEmpty()) {
				qWarning("Error: InputType field specified multiple times in config file");
				return QSet<InputType>();
			}
			inputTypeName = entry.value;
		}

	if (inputTypeName.isEmpty())
		inputTypeName = "quint8";

	if (inputTypeName == "quint8") {
		for (int i = 1; i < 256; ++i)
			set.insert(i);
	} /* else if ### */
	else {
		qWarning("Error: Unknown input type '%s'", qPrintable(inputTypeName));
		return QSet<InputType>();
	}

	return set;
}

static bool loadConfig(const QString &ruleFile, Config *cfg)
{
	ConfigFile::SectionMap sections = ConfigFile::parse(ruleFile);
	if (sections.isEmpty()) {
		qWarning("Error parsing %s", qPrintable(ruleFile));
		return false;
	}

	QSet<InputType> maxInputSet = determineMaxInputSet(sections.value("Options"));
	if (maxInputSet.isEmpty())
		return false;

	Qt::CaseSensitivity cs = Qt::CaseInsensitive;
	if (sections.value("Options").contains("case-sensitive"))
		cs = Qt::CaseSensitive;

	cfg->configSections = sections;
	cfg->caseSensitivity = cs;
	cfg->className = sections.value("Options").value("classname", "Scanner");
	cfg->maxInputSet = maxInputSet;
	cfg->ruleFile = ruleFile;
	return true;
}



static DFA generateMachine(const Config &cfg)
{
	if (cfg.cache) {
		QFileInfo ruleInfo(cfg.ruleFile);
		QFileInfo cacheInfo(ruleInfo.baseName() + ".dfa");
		if (cacheInfo.exists()
			&& cacheInfo.lastModified() > ruleInfo.lastModified()) {
			QFile f(cacheInfo.absoluteFilePath());
			f.open(QIODevice::ReadOnly);
			QDataStream stream(&f);
			DFA machine;
			stream >> machine;
			return machine;
		}
	}

	QMap<QString, NFA> macros;
	foreach(ConfigFile::Entry e, cfg.configSections.value("Macros")) {
		int errCol = 0;
		if (cfg.debug)
			qDebug() << "parsing" << e.value;
		NFA nfa = RE2NFA(macros, cfg.maxInputSet, cfg.caseSensitivity).parse(e.value, &errCol);
		if (nfa.isEmpty()) {
			qWarning("Parse error in line %d column %d", e.lineNumber, errCol);
			return DFA();
		}
		macros.insert(e.key, nfa);
	}

	if (!cfg.configSections.contains("Tokens")) {
		qWarning("Rule file does not contain a [Tokens] section!");
		return DFA();
	}

	QVector<NFA> tokens;

	foreach(ConfigFile::Entry e, cfg.configSections.value("Tokens")) {
		int errCol = 0;
		if (cfg.debug)
			qDebug() << "parsing" << e.value;
		NFA tok = RE2NFA(macros, cfg.maxInputSet, cfg.caseSensitivity).parse(e.value, &errCol);
		if (tok.isEmpty()) {
			qWarning("Parse error in line %d column %d while parsing token %s", e.lineNumber, errCol, e.key.toLocal8Bit().constData());
			return DFA();
		}
		tok.setTerminationSymbol(e.key);
		tokens.append(tok);
	}

	NFA giganticStateMachine;
	foreach(NFA nfa, tokens)
		if (giganticStateMachine.isEmpty())
			giganticStateMachine = nfa;
		else
			giganticStateMachine = NFA::createAlternatingNFA(giganticStateMachine, nfa);

	DFA result = giganticStateMachine.toDFA().minimize();
	if (cfg.cache) {
		QFileInfo ruleInfo(cfg.ruleFile);
		QFileInfo cacheInfo(ruleInfo.baseName() + ".dfa");
		QFile f(cacheInfo.absoluteFilePath());
		f.open(QIODevice::WriteOnly | QIODevice::Truncate);
		QDataStream stream(&f);
		stream << result;
	}
	return result;
}


void tst_LexGen::lexgen()
{
    QFETCH(QString, ruleFile);
    QFETCH(QString, input);
    QFETCH(QString, expectedOutput);

    Config conf;
    QVERIFY(loadConfig(ruleFile, &conf));
    DFA dfa = generateMachine(conf);
    QVERIFY(!dfa.isEmpty());
    conf.debug = true;

    QFile f(input);
    QVERIFY(f.open(QIODevice::ReadOnly));
    input = QString::fromUtf8(f.readAll());
    f.close();
    if (input.endsWith(QLatin1Char('\n')))
        input.chop(1);
//    machine.debug();
    bool ok = false;
    QList<Symbol> symbols = tokenize(dfa, input, &conf, &ok);
    QVERIFY(ok);
    f.setFileName(expectedOutput);
    QVERIFY(f.open(QIODevice::ReadOnly));
    QStringList lines;
    while (!f.atEnd()) {
        QString line = QString::fromUtf8(f.readLine());
        if (line.endsWith(QLatin1Char('\n')))
            line.chop(1);
        lines << line;
    }
    f.close();

//    dfa.debug();
    QCOMPARE(lines.count(), symbols.count());

    for (int i = 0; i < lines.count(); ++i) {
        QStringList l = lines.at(i).split(QChar::fromLatin1('|'));
        QCOMPARE(l.count(), 2);
        QString expectedToken = l.at(0);
        QString expectedLexem = l.at(1);
        QCOMPARE(symbols.at(i).token, expectedToken);
        QCOMPARE(symbols.at(i).lexem, expectedLexem);
    }
}

QTEST_MAIN(tst_LexGen)