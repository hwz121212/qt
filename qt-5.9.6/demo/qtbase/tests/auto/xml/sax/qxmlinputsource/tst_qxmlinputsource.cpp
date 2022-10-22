#include "tst_qxmlinputsource.h"


/*!
  \internal
  \since 4.4

  See task 166278.
 */
void tst_QXmlInputSource::reset() const
{
    const QString input(QString::fromLatin1("<element attribute1='value1' attribute2='value2'/>"));

    QXmlSimpleReader reader;
    QXmlDefaultHandler handler;
    reader.setContentHandler(&handler);

    QXmlInputSource source;
    source.setData(input);

    QCOMPARE(source.data(), input);

    source.reset();
    QCOMPARE(source.data(), input);

    source.reset();
    QVERIFY(reader.parse(source));
    source.reset();
    QCOMPARE(source.data(), input);
}

/*!
  \internal
  \since 4.4

  See task 166278.
 */
void tst_QXmlInputSource::resetSimplified() const
{
    const QString input(QString::fromLatin1("<element/>"));

    QXmlSimpleReader reader;

    QXmlInputSource source;
    source.setData(input);

    QVERIFY(reader.parse(source));
    source.reset();
    QCOMPARE(source.data(), input);
}

void tst_QXmlInputSource::waitForReadyIODevice() const
{
    QEventLoop el;
    ServerAndClient sv(el);
    QTimer::singleShot(1, &sv, SLOT(doIt()));

    el.exec();
    QVERIFY(sv.success);
}

// This class is used to emulate a case where less than 4 bytes are sent in
// a single packet to ensure it is still parsed correctly
class SlowIODevice : public QIODevice
{
public:
    SlowIODevice(const QString &expectedData, QObject *parent = 0)
        : QIODevice(parent), currentPos(0), readyToSend(true)
    {
        stringData = expectedData.toUtf8();
        dataTimer = new QTimer(this);
        connect(dataTimer, &QTimer::timeout, [=]() {
            readyToSend = true;
            emit readyRead();
            dataTimer->stop();
        });
        dataTimer->start(1000);
    }
    bool open(SlowIODevice::OpenMode) override
    {
        setOpenMode(ReadOnly);
        return true;
    }
    bool isSequential() const override
    {
        return true;
    }
    qint64 bytesAvailable() const override
    {
        if (readyToSend && stringData.size() != currentPos)
            return qMax(3, stringData.size() - currentPos);
        return 0;
    }
    qint64 readData(char *data, qint64 maxSize) override
    {
        if (!readyToSend)
            return 0;
        const qint64 readSize = qMin(qMin((qint64)3, maxSize), (qint64)(stringData.size() - currentPos));
        if (readSize > 0)
            memcpy(data, &stringData.constData()[currentPos], readSize);
        currentPos += readSize;
        readyToSend = false;
        if (currentPos != stringData.size())
            dataTimer->start(1000);
        return readSize;
    }
    qint64 writeData(const char *, qint64) override { return 0; }
    bool waitForReadyRead(int msecs) override
    {
        // Delibrately wait a maximum of 10 seconds for the sake
        // of the test, so it doesn't unduly hang
        const int waitTime = qMax(10000, msecs);
        QTime t;
        t.start();
        while (t.elapsed() < waitTime) {
            QCoreApplication::processEvents();
            if (readyToSend)
                return true;
        }
        return false;
    }
private:
    QByteArray stringData;
    int currentPos;
    bool readyToSend;
    QTimer *dataTimer;
};

void tst_QXmlInputSource::inputFromSlowDevice() const
{
    QString expectedData = QStringLiteral("<foo><bar>kake</bar><bar>ja</bar></foo>");
    SlowIODevice slowDevice(expectedData);
    QXmlInputSource source(&slowDevice);
    QString data;
    while (true) {
        const QChar nextChar = source.next();
        if (nextChar == QXmlInputSource::EndOfDocument)
            break;
        else if (nextChar != QXmlInputSource::EndOfData)
            data += nextChar;
    }
    QCOMPARE(data, expectedData);
}

QTEST_MAIN(tst_QXmlInputSource)
//#include "tst_qxmlinputsource.moc"
