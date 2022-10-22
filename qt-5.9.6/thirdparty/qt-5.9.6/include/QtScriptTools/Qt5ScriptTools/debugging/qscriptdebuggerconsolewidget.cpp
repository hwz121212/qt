/****************************************************************************
**
** Copyright (C) 2017 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtSCriptTools module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qscriptdebuggerconsolewidget_p.h"
#include "qscriptdebuggerconsolewidgetinterface_p_p.h"
#include "qscriptdebuggerconsolehistorianinterface_p.h"
#include "qscriptcompletionproviderinterface_p.h"
#include "qscriptcompletiontaskinterface_p.h"

#include <QtCore/qdebug.h>
#include <QtWidgets/qplaintextedit.h>
#include <QtWidgets/qlabel.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qlistview.h>
#include <QtWidgets/qscrollbar.h>
#include <QtWidgets/qboxlayout.h>
#include <QtWidgets/qcompleter.h>

#include <algorithm>

QT_BEGIN_NAMESPACE


QScriptDebuggerConsoleWidgetPrivate::QScriptDebuggerConsoleWidgetPrivate()
{
    historyIndex = -1;
}

QScriptDebuggerConsoleWidgetPrivate::~QScriptDebuggerConsoleWidgetPrivate()
{
}

void QScriptDebuggerConsoleWidgetPrivate::_q_onLineEntered(const QString &contents)
{
    Q_Q(QScriptDebuggerConsoleWidget);
    outputEdit->appendPlainText(QString::fromLatin1("%0 %1").arg(commandLine->prompt()).arg(contents));
    outputEdit->scrollToBottom();
    historyIndex = -1;
    newInput.clear();
    emit q->lineEntered(contents);
}

void QScriptDebuggerConsoleWidgetPrivate::_q_onLineEdited(const QString &contents)
{
    if (historyIndex != -1) {
    // ### try to get the bash behavior...
#if 0
        historian->changeHistoryAt(historyIndex, contents);
#endif
    } else {
        newInput = contents;
    }
}

static bool lengthLessThan(const QString &s1, const QString &s2)
{
    return s1.length() < s2.length();
}

// input must be sorted by length already
static QString longestCommonPrefix(const QStringList &lst)
{
    QString result = lst.last();
    for (int i = lst.size() - 2; (i >= 0) && !result.isEmpty(); --i) {
        const QString &s = lst.at(i);
        int j = 0;
        for ( ; (j < qMin(s.length(), result.length())) && (s.at(j) == result.at(j)); ++j)
            ;
        result = result.left(j);
    }
    return result;
}

void QScriptDebuggerConsoleWidgetPrivate::_q_onCompletionTaskFinished()
{
    QScriptCompletionTaskInterface *task = 0;
    task = qobject_cast<QScriptCompletionTaskInterface*>(q_func()->sender());
    if (task->resultCount() == 1) {
        QString completion = task->resultAt(0);
        completion.append(task->appendix());
        QString tmp = commandLine->input();
        tmp.remove(task->position(), task->length());
        tmp.insert(task->position(), completion);
        commandLine->setInput(tmp);
    } else if (task->resultCount() > 1) {
        {
            QStringList lst;
            for (int i = 0; i < task->resultCount(); ++i)
                lst.append(task->resultAt(i).mid(task->length()));
            std::sort(lst.begin(), lst.end(), lengthLessThan);
            QString lcp = longestCommonPrefix(lst);
            if (!lcp.isEmpty()) {
                QString tmp = commandLine->input();
                tmp.insert(task->position() + task->length(), lcp);
                commandLine->setInput(tmp);
            }
        }

        outputEdit->appendPlainText(QString::fromLatin1("%0 %1")
                                    .arg(commandLine->prompt()).arg(commandLine->input()));
        int maxLength = 0;
        for (int i = 0; i < task->resultCount(); ++i)
            maxLength = qMax(maxLength, task->resultAt(i).length());
        Q_ASSERT(maxLength > 0);
        int tab = 8;
        int columns = qMax(1, outputEdit->charactersPerLine() / (maxLength + tab));
        QString msg;
        for (int i = 0; i < task->resultCount(); ++i) {
            if (i != 0) {
                if ((i % columns) == 0) {
                    outputEdit->appendPlainText(msg);
                    msg.clear();
                } else {
                    int pad = maxLength + tab - (msg.length() % (maxLength + tab));
                    msg.append(QString(pad, QLatin1Char(' ')));
                }
            }
            msg.append(task->resultAt(i));
        }
        if (!msg.isEmpty())
            outputEdit->appendPlainText(msg);
        outputEdit->scrollToBottom();
    }
    task->deleteLater();
}

QScriptDebuggerConsoleWidget::QScriptDebuggerConsoleWidget(QWidget *parent)
    : QScriptDebuggerConsoleWidgetInterface(*new QScriptDebuggerConsoleWidgetPrivate, parent, 0)
{
    Q_D(QScriptDebuggerConsoleWidget);
    d->commandLine = new CommandLine();
    d->commandLine->setPrompt(QString::fromLatin1("qsdb>"));
    d->outputEdit = new QScriptDebuggerConsoleWidgetOutputEdit();
    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setSpacing(0);
    vbox->setMargin(0);
    vbox->addWidget(d->outputEdit);
    vbox->addWidget(d->commandLine);

#if 0
    QString sheet = QString::fromLatin1("background-color: black;"
                                        "color: aquamarine;"
                                        "font-size: 14px;"
                                        "font-family: \"Monospace\"");
#endif
#ifndef QT_NO_STYLE_STYLESHEET
    QString sheet = QString::fromLatin1("font-size: 14px; font-family: \"Monospace\";");
    setStyleSheet(sheet);
#endif

    QObject::connect(d->commandLine, SIGNAL(lineEntered(QString)),
                     this, SLOT(_q_onLineEntered(QString)));
    QObject::connect(d->commandLine, SIGNAL(lineEdited(QString)),
                     this, SLOT(_q_onLineEdited(QString)));
}

QScriptDebuggerConsoleWidget::~QScriptDebuggerConsoleWidget()
{
}

void QScriptDebuggerConsoleWidget::message(
    QtMsgType type, const QString &text, const QString &fileName,
    int lineNumber, int columnNumber, const QVariant &/*data*/)
{
    Q_D(QScriptDebuggerConsoleWidget);
    QString msg;
    if (!fileName.isEmpty() || (lineNumber != -1)) {
        if (!fileName.isEmpty())
            msg.append(fileName);
        else
            msg.append(QLatin1String("<noname>"));
        if (lineNumber != -1) {
            msg.append(QLatin1Char(':'));
            msg.append(QString::number(lineNumber));
            if (columnNumber != -1) {
                msg.append(QLatin1Char(':'));
                msg.append(QString::number(columnNumber));
            }
        }
        msg.append(QLatin1String(": "));
    }
    msg.append(text);
    QTextCharFormat oldFmt = d->outputEdit->currentCharFormat();
    QTextCharFormat fmt(oldFmt);
    if (type == QtCriticalMsg) {
        fmt.setForeground(Qt::red);
        d->outputEdit->setCurrentCharFormat(fmt);
    }
    d->outputEdit->appendPlainText(msg);
    d->outputEdit->setCurrentCharFormat(oldFmt);
    d->outputEdit->scrollToBottom();
}

void QScriptDebuggerConsoleWidget::setLineContinuationMode(bool enabled)
{
    Q_D(QScriptDebuggerConsoleWidget);
    QString prompt = enabled
                     ? QString::fromLatin1("....")
                     : QString::fromLatin1("qsdb>");
    d->commandLine->setPrompt(prompt);
}

void QScriptDebuggerConsoleWidget::clear()
{
    Q_D(QScriptDebuggerConsoleWidget);
    d->outputEdit->clear();
}

void QScriptDebuggerConsoleWidget::keyPressEvent(QKeyEvent *event)
{
    Q_D(QScriptDebuggerConsoleWidget);
    if (event->key() == Qt::Key_Up) {
        if (d->historyIndex+1 == d->historian->historyCount())
            return;
        QString cmd = d->historian->historyAt(++d->historyIndex);
        d->commandLine->setInput(cmd);
    } else if (event->key() == Qt::Key_Down) {
        if (d->historyIndex == -1) {
            // nothing to do
        } else if (d->historyIndex == 0) {
            d->commandLine->setInput(d->newInput);
            --d->historyIndex;
        } else {
            QString cmd = d->historian->historyAt(--d->historyIndex);
            d->commandLine->setInput(cmd);
        }
    } else if (event->key() == Qt::Key_Tab) {
        QScriptCompletionTaskInterface *task = 0;
        task = d->completionProvider->createCompletionTask(
            d->commandLine->input(), d->commandLine->cursorPosition(),
            /*frameIndex=*/-1, // current frame
            QScriptCompletionProviderInterface::ConsoleCommandCompletion);
        QObject::connect(task, SIGNAL(finished()),
                         this, SLOT(_q_onCompletionTaskFinished()));
        task->start();
    } else {
        QScriptDebuggerConsoleWidgetInterface::keyPressEvent(event);
    }
}

bool QScriptDebuggerConsoleWidget::focusNextPrevChild(bool b)
{
    Q_D(QScriptDebuggerConsoleWidget);
    if (d->outputEdit->hasFocus())
        return QScriptDebuggerConsoleWidgetInterface::focusNextPrevChild(b);
    else
        return false;
}

QT_END_NAMESPACE

//#include "qscriptdebuggerconsolewidget.moc"

//#include "moc_qscriptdebuggerconsolewidget_p.cpp"
