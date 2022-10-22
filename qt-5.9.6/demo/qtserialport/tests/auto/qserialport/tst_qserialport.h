#pragma once

#include <QtTest/QtTest>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

#include <QThread>

Q_DECLARE_METATYPE(QSerialPort::SerialPortError);
Q_DECLARE_METATYPE(QSerialPort::BaudRate);
Q_DECLARE_METATYPE(QSerialPort::DataBits);
Q_DECLARE_METATYPE(QSerialPort::Parity);
Q_DECLARE_METATYPE(QSerialPort::StopBits);
Q_DECLARE_METATYPE(QSerialPort::FlowControl);
Q_DECLARE_METATYPE(QIODevice::OpenMode);
Q_DECLARE_METATYPE(QIODevice::OpenModeFlag);
Q_DECLARE_METATYPE(Qt::ConnectionType);




class tst_QSerialPortInfo : public QObject
{
	Q_OBJECT
public:
	explicit tst_QSerialPortInfo();

private slots:
	void initTestCase();

	void constructors();
	void assignment();

private:
	QString m_senderPortName;
	QString m_receiverPortName;
	QStringList m_availablePortNames;
};


class tst_QSerialPort : public QObject
{
    Q_OBJECT
public:
	explicit tst_QSerialPort() {};

    static void enterLoop(int secs)
    {
        ++loopLevel;
        QTestEventLoop::instance().enterLoop(secs);
        --loopLevel;
    }

    static void enterLoopMsecs(int msecs)
    {
        ++loopLevel;
        QTestEventLoop::instance().enterLoopMSecs(msecs);
        --loopLevel;
    }

    static void exitLoop()
    {
        if (loopLevel > 0)
            QTestEventLoop::instance().exitLoop();
    }

    static bool timeout()
    {
        return QTestEventLoop::instance().timeout();
    }

private slots:
    //void initTestCase();

    //void defaultConstruct();
    //void constructByName();
    //void constructByInfo();

    //void openExisting_data();
    void openExisting();
    void openNotExisting_data();
    void openNotExisting();

    void baudRate_data();
    void baudRate();
    void dataBits_data();
    void dataBits();
    void parity_data();
    void parity();
    void stopBits_data();
    void stopBits();
    void flowControl_data();
    void flowControl();

    void rts();
    void dtr();
    void independenceRtsAndDtr();

    void flush();
    void doubleFlush();

    void waitForBytesWritten();

    void waitForReadyReadWithTimeout();
    void waitForReadyReadWithOneByte();
    void waitForReadyReadWithAlphabet();

    void twoStageSynchronousLoopback();

    void synchronousReadWrite();

    void asynchronousWriteByBytesWritten_data();
    void asynchronousWriteByBytesWritten();

    void asynchronousWriteByTimer_data();
    void asynchronousWriteByTimer();

    void asyncReadWithLimitedReadBufferSize();

    void readBufferOverflow();
    void readAfterInputClear();
    void synchronousReadWriteAfterAsynchronousReadWrite();

    void controlBreak();

    void clearAfterOpen();

    void readWriteWithDifferentBaudRate_data();
    void readWriteWithDifferentBaudRate();

protected slots:
    void handleBytesWrittenAndExitLoopSlot(qint64 bytesWritten);
    void handleBytesWrittenAndExitLoopSlot2(qint64 bytesWritten);

private:
    QString m_senderPortName;
    QString m_receiverPortName;
    QStringList m_availablePortNames;

    static int loopLevel;
    static const QByteArray alphabetArray;
    static const QByteArray newlineArray;
};

class AsyncReader : public QObject
{
    Q_OBJECT
public:
    explicit AsyncReader(QSerialPort &port, Qt::ConnectionType connectionType, int expectedBytesCount)
        : serialPort(port), expectedBytesCount(expectedBytesCount)
    {
        connect(&serialPort, &QSerialPort::readyRead, this, &AsyncReader::receive, connectionType);
    }

private slots:
    void receive()
    {
        if (serialPort.bytesAvailable() < expectedBytesCount)
            return;
        tst_QSerialPort::exitLoop();
    }

private:
    QSerialPort &serialPort;
    const int expectedBytesCount;
};

class AsyncWriterByBytesWritten : public QObject
{
    Q_OBJECT
public:
    explicit AsyncWriterByBytesWritten(
            QSerialPort &port, Qt::ConnectionType connectionType, const QByteArray &dataToWrite)
        : serialPort(port), writeChunkSize(0)
    {
        writeBuffer.setData(dataToWrite);
        writeBuffer.open(QIODevice::ReadOnly);
        connect(&serialPort, &QSerialPort::bytesWritten, this, &AsyncWriterByBytesWritten::send, connectionType);
        send();
    }

private slots:
    void send()
    {
        if (writeBuffer.bytesAvailable() > 0)
            serialPort.write(writeBuffer.read(++writeChunkSize));
    }

private:
    QSerialPort &serialPort;
    QBuffer writeBuffer;
    int writeChunkSize;
};


class AsyncWriterByTimer : public QObject
{
    Q_OBJECT
public:
    explicit AsyncWriterByTimer(
            QSerialPort &port, Qt::ConnectionType connectionType, const QByteArray &dataToWrite)
        : serialPort(port), writeChunkSize(0)
    {
        writeBuffer.setData(dataToWrite);
        writeBuffer.open(QIODevice::ReadOnly);
        connect(&timer, &QTimer::timeout, this, &AsyncWriterByTimer::send, connectionType);
        timer.start(0);
    }

private slots:
    void send()
    {
        if (writeBuffer.bytesAvailable() > 0)
            serialPort.write(writeBuffer.read(++writeChunkSize));
        else
            timer.stop();
    }

private:
    QSerialPort &serialPort;
    QBuffer writeBuffer;
    int writeChunkSize;
    QTimer timer;
};


class AsyncReader2 : public QObject
{
    Q_OBJECT
public:
    explicit AsyncReader2(QSerialPort &port, const QByteArray &expectedData)
        : serialPort(port), expectedData(expectedData)
    {
        connect(&serialPort, &QSerialPort::readyRead, this, &AsyncReader2::receive);
    }

private slots:
    void receive()
    {
        receivedData.append(serialPort.readAll());
        if (receivedData == expectedData)
            tst_QSerialPort::exitLoop();
    }

private:
    QSerialPort &serialPort;
    const QByteArray expectedData;
    QByteArray receivedData;
};


class MasterTransactor : public QObject
{
    Q_OBJECT
public:
    explicit MasterTransactor(const QString &name)
        : serialPort(name)
    {
    }

public slots:
    void open()
    {
        if (serialPort.open(QSerialPort::ReadWrite)) {
            createAsynchronousConnection();
            serialPort.write("A", 1);
        }
    }

private slots:
    void synchronousTransaction()
    {
        serialPort.write("B", 1);
        if (serialPort.waitForBytesWritten(100)) {
            if (serialPort.waitForReadyRead(100))
                tst_QSerialPort::exitLoop();
        }
    }

    void transaction()
    {
        deleteAsyncronousConnection();
        synchronousTransaction();
    }

private:
    void createAsynchronousConnection()
    {
        connect(&serialPort, &QSerialPort::readyRead, this, &MasterTransactor::transaction);
    }

    void deleteAsyncronousConnection()
    {
        serialPort.disconnect();
    }

    QSerialPort serialPort;
};

class SlaveTransactor : public QObject
{
    Q_OBJECT
public:
    explicit SlaveTransactor(const QString &name)
        : serialPort(new QSerialPort(name, this))
    {
        connect(serialPort, &QSerialPort::readyRead, this, &SlaveTransactor::transaction);
    }

public slots:
    void open()
    {
        if (serialPort->open(QSerialPort::ReadWrite))
            emit ready();
    }

signals:
    void ready();

private slots:
    void transaction()
    {
        serialPort->write("Z", 1);
    }

private:
    QSerialPort *serialPort;
};

class BreakReader : public QObject
{
    Q_OBJECT
public:
    explicit BreakReader(QSerialPort &port)
        : serialPort(port)
    {
        connect(&serialPort, &QSerialPort::readyRead, this, &BreakReader::receive);
    }

private slots:
    void receive()
    {
        tst_QSerialPort::exitLoop();
    }

private:
    QSerialPort &serialPort;
};

