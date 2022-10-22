#include "tst_qserialport.h"


int tst_QSerialPort::loopLevel = 0;

const QByteArray tst_QSerialPort::alphabetArray("ABCDEFGHIJKLMNOPQRSTUVWXUZ");
const QByteArray tst_QSerialPort::newlineArray("\n\r");






tst_QSerialPortInfo::tst_QSerialPortInfo()
{
}

void tst_QSerialPortInfo::initTestCase()
{
	m_senderPortName = QString::fromLocal8Bit(qgetenv("QTEST_SERIALPORT_SENDER"));
	m_receiverPortName = QString::fromLocal8Bit(qgetenv("QTEST_SERIALPORT_RECEIVER"));
	if (m_senderPortName.isEmpty() || m_receiverPortName.isEmpty()) {
		static const char message[] =
			"Test doesn't work because the names of serial ports aren't found in env.\n"
			"Please set environment variables:\n"
			" QTEST_SERIALPORT_SENDER to name of output serial port\n"
			" QTEST_SERIALPORT_RECEIVER to name of input serial port\n"
			"Specify short names of port"
#if defined(Q_OS_UNIX)
			", like 'ttyS0'\n";
#elif defined(Q_OS_WIN32)
			", like 'COM1'\n";
#else
			"\n";
#endif
		QSKIP(message);
	}
	else {
		m_availablePortNames << m_senderPortName << m_receiverPortName;
	}
}

void tst_QSerialPortInfo::constructors()
{
	QSerialPortInfo empty;
	QVERIFY(empty.isNull());
	QSerialPortInfo empty2(QLatin1String("ABCD"));
	QVERIFY(empty2.isNull());
	QSerialPortInfo empty3(empty);
	QVERIFY(empty3.isNull());

	QSerialPortInfo exist(m_senderPortName);
	QVERIFY(!exist.isNull());
	QSerialPortInfo exist2(exist);
	QVERIFY(!exist2.isNull());
}

void tst_QSerialPortInfo::assignment()
{
	QSerialPortInfo empty;
	QVERIFY(empty.isNull());
	QSerialPortInfo empty2;
	empty2 = empty;
	QVERIFY(empty2.isNull());

	QSerialPortInfo exist(m_senderPortName);
	QVERIFY(!exist.isNull());
	QSerialPortInfo exist2;
	exist2 = exist;
	QVERIFY(!exist2.isNull());
}




void tst_QSerialPort::openExisting()
{
    QFETCH(int, openMode);
    QFETCH(bool, openResult);
    QFETCH(QSerialPort::SerialPortError, errorCode);

    for (const QString &serialPortName : qAsConst(m_availablePortNames)) {
        QSerialPort serialPort(serialPortName);
        QSignalSpy errorSpy(&serialPort, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error));
        QVERIFY(errorSpy.isValid());

        QCOMPARE(serialPort.portName(), serialPortName);
        QCOMPARE(serialPort.open(QIODevice::OpenMode(openMode)), openResult);
        QCOMPARE(serialPort.isOpen(), openResult);
        QCOMPARE(serialPort.error(), errorCode);

        QCOMPARE(errorSpy.count(), 1);
        QCOMPARE(qvariant_cast<QSerialPort::SerialPortError>(errorSpy.at(0).at(0)), errorCode);
    }
}

void tst_QSerialPort::openNotExisting_data()
{
    QTest::addColumn<QString>("serialPortName");
    QTest::addColumn<bool>("openResult");
    QTest::addColumn<QSerialPort::SerialPortError>("errorCode");

    QTest::newRow("Empty") << QString("") << false << QSerialPort::DeviceNotFoundError;
    QTest::newRow("Null") << QString() << false << QSerialPort::DeviceNotFoundError;
    QTest::newRow("NotExists") << QString("ABCDEF") << false << QSerialPort::DeviceNotFoundError;
}

void tst_QSerialPort::openNotExisting()
{
    QFETCH(QString, serialPortName);
    QFETCH(bool, openResult);
    //QFETCH(QSerialPort::SerialPortError, errorCode);

    QSerialPort serialPort(serialPortName);

    QSignalSpy errorSpy(&serialPort, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error));
    QVERIFY(errorSpy.isValid());

    QCOMPARE(serialPort.portName(), serialPortName);
    QCOMPARE(serialPort.open(QIODevice::ReadOnly), openResult);
    QCOMPARE(serialPort.isOpen(), openResult);
    //QCOMPARE(serialPort.error(), errorCode);

    //QCOMPARE(errorSpy.count(), 1);
    //QCOMPARE(qvariant_cast<QSerialPort::SerialPortError>(errorSpy.at(0).at(0)), errorCode);
}

void tst_QSerialPort::baudRate_data()
{
    QTest::addColumn<qint32>("baudrate");
    QTest::newRow("Baud1200") << static_cast<qint32>(QSerialPort::Baud1200);
    QTest::newRow("Baud2400") << static_cast<qint32>(QSerialPort::Baud2400);
    QTest::newRow("Baud4800") << static_cast<qint32>(QSerialPort::Baud4800);
    QTest::newRow("Baud9600") << static_cast<qint32>(QSerialPort::Baud9600);
    QTest::newRow("Baud19200") << static_cast<qint32>(QSerialPort::Baud19200);
    QTest::newRow("Baud38400") << static_cast<qint32>(QSerialPort::Baud38400);
    QTest::newRow("Baud57600") << static_cast<qint32>(QSerialPort::Baud57600);
    QTest::newRow("Baud115200") << static_cast<qint32>(QSerialPort::Baud115200);

    QTest::newRow("31250") << 31250; // custom baudrate (MIDI)
}

void tst_QSerialPort::baudRate()
{
    QFETCH(qint32, baudrate);

    {
        // setup before opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.setBaudRate(baudrate));
        QCOMPARE(serialPort.baudRate(), baudrate);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
    }

    {
        // setup after opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
        QVERIFY(serialPort.setBaudRate(baudrate));
        QCOMPARE(serialPort.baudRate(), baudrate);
    }
}

void tst_QSerialPort::dataBits_data()
{
    QTest::addColumn<QSerialPort::DataBits>("databits");
    QTest::newRow("Data5") << QSerialPort::Data5;
    QTest::newRow("Data6") << QSerialPort::Data6;
    QTest::newRow("Data7") << QSerialPort::Data7;
    QTest::newRow("Data8") << QSerialPort::Data8;
}

void tst_QSerialPort::dataBits()
{
    QFETCH(QSerialPort::DataBits, databits);

    {
        // setup before opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.setDataBits(databits));
        QCOMPARE(serialPort.dataBits(), databits);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
    }

    {
        // setup after opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
        QVERIFY(serialPort.setDataBits(databits));
        QCOMPARE(serialPort.dataBits(), databits);
    }
}

void tst_QSerialPort::parity_data()
{
    QTest::addColumn<QSerialPort::Parity>("parity");
    QTest::newRow("NoParity") << QSerialPort::NoParity;
    QTest::newRow("EvenParity") << QSerialPort::EvenParity;
    QTest::newRow("OddParity") << QSerialPort::OddParity;
    QTest::newRow("SpaceParity") << QSerialPort::SpaceParity;
    QTest::newRow("MarkParity") << QSerialPort::MarkParity;
}

void tst_QSerialPort::parity()
{
    QFETCH(QSerialPort::Parity, parity);

    {
        // setup before opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.setParity(parity));
        QCOMPARE(serialPort.parity(), parity);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
    }

    {
        // setup after opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
        QVERIFY(serialPort.setParity(parity));
        QCOMPARE(serialPort.parity(), parity);
    }
}

void tst_QSerialPort::stopBits_data()
{
    QTest::addColumn<QSerialPort::StopBits>("stopbits");
    QTest::newRow("OneStop") << QSerialPort::OneStop;
#ifdef Q_OS_WIN
    QTest::newRow("OneAndHalfStop") << QSerialPort::OneAndHalfStop;
#endif
    QTest::newRow("TwoStop") << QSerialPort::TwoStop;
}

void tst_QSerialPort::stopBits()
{
    QFETCH(QSerialPort::StopBits, stopbits);

    {
        // setup before opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.setStopBits(stopbits));
        QCOMPARE(serialPort.stopBits(), stopbits);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
    }

    {
        // setup after opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
        QVERIFY(serialPort.setStopBits(stopbits));
        QCOMPARE(serialPort.stopBits(), stopbits);
    }
}

void tst_QSerialPort::flowControl_data()
{
    QTest::addColumn<QSerialPort::FlowControl>("flowcontrol");
    QTest::newRow("NoFlowControl") << QSerialPort::NoFlowControl;
    QTest::newRow("HardwareControl") << QSerialPort::HardwareControl;
    QTest::newRow("SoftwareControl") << QSerialPort::SoftwareControl;
}

void tst_QSerialPort::flowControl()
{
    QFETCH(QSerialPort::FlowControl, flowcontrol);

    {
        // setup before opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.setFlowControl(flowcontrol));
        QCOMPARE(serialPort.flowControl(), flowcontrol);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
    }

    {
        // setup after opening
        QSerialPort serialPort(m_senderPortName);
        QVERIFY(serialPort.open(QIODevice::ReadWrite));
        QVERIFY(serialPort.setFlowControl(flowcontrol));
        QCOMPARE(serialPort.flowControl(), flowcontrol);
    }
}

void tst_QSerialPort::rts()
{
    QSerialPort serialPort(m_senderPortName);

    QSignalSpy errorSpy(&serialPort, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error));
    QVERIFY(errorSpy.isValid());
    QSignalSpy rtsSpy(&serialPort, &QSerialPort::requestToSendChanged);
    QVERIFY(rtsSpy.isValid());

    QVERIFY(serialPort.open(QIODevice::ReadWrite));

    // no flow control
    QVERIFY(serialPort.setFlowControl(QSerialPort::NoFlowControl));
    const bool toggle1 = !serialPort.isRequestToSend();
    QVERIFY(serialPort.setRequestToSend(toggle1));
    QCOMPARE(serialPort.isRequestToSend(), toggle1);

    // software flow control
    QVERIFY(serialPort.setFlowControl(QSerialPort::SoftwareControl));
    const bool toggle2 = !serialPort.isRequestToSend();
    QVERIFY(serialPort.setRequestToSend(toggle2));
    QCOMPARE(serialPort.isRequestToSend(), toggle2);

    // hardware flow control
    QVERIFY(serialPort.setFlowControl(QSerialPort::HardwareControl));
    const bool toggle3 = !serialPort.isRequestToSend();
    QVERIFY(!serialPort.setRequestToSend(toggle3)); // not allowed
    QCOMPARE(serialPort.isRequestToSend(), !toggle3); // same as before
    QCOMPARE(serialPort.error(), QSerialPort::UnsupportedOperationError);

    QCOMPARE(errorSpy.count(), 2);
    QCOMPARE(qvariant_cast<QSerialPort::SerialPortError>(errorSpy.at(0).at(0)), QSerialPort::NoError);
    QCOMPARE(qvariant_cast<QSerialPort::SerialPortError>(errorSpy.at(1).at(0)), QSerialPort::UnsupportedOperationError);

    QCOMPARE(rtsSpy.count(), 2);
    QCOMPARE(qvariant_cast<bool>(rtsSpy.at(0).at(0)), toggle1);
    QCOMPARE(qvariant_cast<bool>(rtsSpy.at(1).at(0)), toggle2);
}

void tst_QSerialPort::dtr()
{
    QSerialPort serialPort(m_senderPortName);

    QSignalSpy errorSpy(&serialPort, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error));
    QVERIFY(errorSpy.isValid());
    QSignalSpy dtrSpy(&serialPort, &QSerialPort::dataTerminalReadyChanged);
    QVERIFY(dtrSpy.isValid());

    QVERIFY(serialPort.open(QIODevice::ReadWrite));

    // no flow control
    QVERIFY(serialPort.setFlowControl(QSerialPort::NoFlowControl));
    const bool toggle1 = !serialPort.isDataTerminalReady();
    QVERIFY(serialPort.setDataTerminalReady(toggle1));
    QCOMPARE(serialPort.isDataTerminalReady(), toggle1);

    // software flow control
    QVERIFY(serialPort.setFlowControl(QSerialPort::SoftwareControl));
    const bool toggle2 = !serialPort.isDataTerminalReady();
    QVERIFY(serialPort.setDataTerminalReady(toggle2));
    QCOMPARE(serialPort.isDataTerminalReady(), toggle2);

    // hardware flow control
    QVERIFY(serialPort.setFlowControl(QSerialPort::HardwareControl));
    const bool toggle3 = !serialPort.isDataTerminalReady();
    QVERIFY(serialPort.setDataTerminalReady(toggle3));
    QCOMPARE(serialPort.isDataTerminalReady(), toggle3);

    QCOMPARE(errorSpy.count(), 1);
    QCOMPARE(qvariant_cast<QSerialPort::SerialPortError>(errorSpy.at(0).at(0)), QSerialPort::NoError);

    QCOMPARE(dtrSpy.count(), 3);
    QCOMPARE(qvariant_cast<bool>(dtrSpy.at(0).at(0)), toggle1);
    QCOMPARE(qvariant_cast<bool>(dtrSpy.at(1).at(0)), toggle2);
    QCOMPARE(qvariant_cast<bool>(dtrSpy.at(2).at(0)), toggle3);
}

void tst_QSerialPort::independenceRtsAndDtr()
{
    QSerialPort serialPort(m_senderPortName);
    QVERIFY(serialPort.open(QIODevice::ReadWrite)); // No flow control by default!

    QVERIFY(serialPort.setDataTerminalReady(true));
    QVERIFY(serialPort.setRequestToSend(true));
    QVERIFY(serialPort.isDataTerminalReady());
    QVERIFY(serialPort.isRequestToSend());

    // check that DTR changing does not change RTS
    QVERIFY(serialPort.setDataTerminalReady(false));
    QVERIFY(!serialPort.isDataTerminalReady());
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.setDataTerminalReady(true));
    QVERIFY(serialPort.isDataTerminalReady());
    QVERIFY(serialPort.isRequestToSend());

    // check that RTS changing does not change DTR
    QVERIFY(serialPort.setRequestToSend(false));
    QVERIFY(!serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());
    QVERIFY(serialPort.setRequestToSend(true));
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());

    // check that baud rate changing does not change DTR or RTS
    QVERIFY(serialPort.setBaudRate(115200));
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());

    // check that data bits changing does not change DTR or RTS
    QVERIFY(serialPort.setDataBits(QSerialPort::Data7));
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());

    // check that parity changing does not change DTR or RTS
    QVERIFY(serialPort.setParity(QSerialPort::EvenParity));
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());

    // check that stop bits changing does not change DTR or RTS
    QVERIFY(serialPort.setStopBits(QSerialPort::TwoStop));
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());

    // check that software flow control changing does not change DTR or RTS
    QVERIFY(serialPort.setFlowControl(QSerialPort::SoftwareControl));
    QVERIFY(serialPort.isRequestToSend());
    QVERIFY(serialPort.isDataTerminalReady());
}

void tst_QSerialPort::handleBytesWrittenAndExitLoopSlot(qint64 bytesWritten)
{
    QCOMPARE(bytesWritten, qint64(alphabetArray.size() + newlineArray.size()));
    exitLoop();
}

void tst_QSerialPort::flush()
{
#ifdef Q_OS_WIN
    QSKIP("flush() does not work on Windows");
#endif

    // the dummy device on other side also has to be open
    QSerialPort dummySerialPort(m_receiverPortName);
    QVERIFY(dummySerialPort.open(QIODevice::ReadOnly));

    QSerialPort serialPort(m_senderPortName);
    connect(&serialPort, &QSerialPort::bytesWritten, this, &tst_QSerialPort::handleBytesWrittenAndExitLoopSlot);
    QSignalSpy bytesWrittenSpy(&serialPort, &QSerialPort::bytesWritten);

    QVERIFY(serialPort.open(QIODevice::WriteOnly));
    serialPort.write(alphabetArray + newlineArray);
    QCOMPARE(serialPort.bytesToWrite(), qint64(alphabetArray.size() + newlineArray.size()));
    serialPort.flush();
    QCOMPARE(serialPort.bytesToWrite(), qint64(0));
    enterLoop(1);
    QVERIFY2(!timeout(), "Timed out when waiting for the bytesWritten(qint64) signal.");
    QCOMPARE(bytesWrittenSpy.count(), 1);
}

void tst_QSerialPort::handleBytesWrittenAndExitLoopSlot2(qint64 bytesWritten)
{
    static qint64 bytes = 0;
    bytes += bytesWritten;

    QVERIFY(bytesWritten == newlineArray.size() || bytesWritten == alphabetArray.size());

    if (bytes == (alphabetArray.size() + newlineArray.size()))
        exitLoop();
}

void tst_QSerialPort::doubleFlush()
{
#ifdef Q_OS_WIN
    QSKIP("flush() does not work on Windows");
#endif

    // the dummy device on other side also has to be open
    QSerialPort dummySerialPort(m_receiverPortName);
    QVERIFY(dummySerialPort.open(QIODevice::ReadOnly));

    QSerialPort serialPort(m_senderPortName);
    connect(&serialPort, &QSerialPort::bytesWritten, this, &tst_QSerialPort::handleBytesWrittenAndExitLoopSlot2);
    QSignalSpy bytesWrittenSpy(&serialPort, &QSerialPort::bytesWritten);

    QVERIFY(serialPort.open(QIODevice::WriteOnly));
    serialPort.write(alphabetArray);
    QCOMPARE(serialPort.bytesToWrite(), qint64(alphabetArray.size()));
    serialPort.flush();
    QCOMPARE(serialPort.bytesToWrite(), qint64(0));
    serialPort.write(newlineArray);
    QCOMPARE(serialPort.bytesToWrite(), qint64(newlineArray.size()));
    serialPort.flush();
    QCOMPARE(serialPort.bytesToWrite(), qint64(0));

    enterLoop(1);
    QVERIFY2(!timeout(), "Timed out when waiting for the bytesWritten(qint64) signal.");
    QCOMPARE(bytesWrittenSpy.count(), 2);
}

void tst_QSerialPort::waitForBytesWritten()
{
    // the dummy device on other side also has to be open
    QSerialPort dummySerialPort(m_receiverPortName);
    QVERIFY(dummySerialPort.open(QIODevice::ReadOnly));

    QSerialPort serialPort(m_senderPortName);
    QVERIFY(serialPort.open(QIODevice::WriteOnly));
    serialPort.write(alphabetArray);
    const qint64 toWrite = serialPort.bytesToWrite();
    QVERIFY(serialPort.waitForBytesWritten(1000));
    QVERIFY(toWrite > serialPort.bytesToWrite());
}

void tst_QSerialPort::waitForReadyReadWithTimeout()
{
    // the dummy device on other side also has to be open
    QSerialPort dummySerialPort(m_senderPortName);
    QVERIFY(dummySerialPort.open(QIODevice::WriteOnly));

    QSerialPort receiverSerialPort(m_receiverPortName);
    QVERIFY(receiverSerialPort.open(QIODevice::ReadOnly));
    QVERIFY(!receiverSerialPort.waitForReadyRead(5));
    QCOMPARE(receiverSerialPort.bytesAvailable(), qint64(0));
    QCOMPARE(receiverSerialPort.error(), QSerialPort::TimeoutError);
}

void tst_QSerialPort::waitForReadyReadWithOneByte()
{
    const qint64 oneByte = 1;
    const int waitMsecs = 50;

    QSerialPort senderSerialPort(m_senderPortName);
    QVERIFY(senderSerialPort.open(QIODevice::WriteOnly));
    QSerialPort receiverSerialPort(m_receiverPortName);
    QSignalSpy readyReadSpy(&receiverSerialPort, &QSerialPort::readyRead);
    QVERIFY(readyReadSpy.isValid());
    QVERIFY(receiverSerialPort.open(QIODevice::ReadOnly));
    QCOMPARE(senderSerialPort.write(alphabetArray.constData(), oneByte), oneByte);
    QVERIFY(senderSerialPort.waitForBytesWritten(waitMsecs));
    QVERIFY(receiverSerialPort.waitForReadyRead(waitMsecs));
    QCOMPARE(receiverSerialPort.bytesAvailable(), oneByte);
    QCOMPARE(receiverSerialPort.error(), QSerialPort::NoError);
    QCOMPARE(readyReadSpy.count(), 1);
}

void tst_QSerialPort::waitForReadyReadWithAlphabet()
{
    const int waitMsecs = 50;

    QSerialPort senderSerialPort(m_senderPortName);
    QVERIFY(senderSerialPort.open(QIODevice::WriteOnly));
    QSerialPort receiverSerialPort(m_receiverPortName);
    QSignalSpy readyReadSpy(&receiverSerialPort, &QSerialPort::readyRead);
    QVERIFY(readyReadSpy.isValid());
    QVERIFY(receiverSerialPort.open(QIODevice::ReadOnly));
    QCOMPARE(senderSerialPort.write(alphabetArray), qint64(alphabetArray.size()));
    QVERIFY(senderSerialPort.waitForBytesWritten(waitMsecs));

    do {
        QVERIFY(receiverSerialPort.waitForReadyRead(waitMsecs));
    } while (receiverSerialPort.bytesAvailable() < qint64(alphabetArray.size()));

    QCOMPARE(receiverSerialPort.error(), QSerialPort::NoError);
    QVERIFY(readyReadSpy.count() > 0);
}

void tst_QSerialPort::twoStageSynchronousLoopback()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::ReadWrite));

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadWrite));

    const int waitMsecs = 50;

    // first stage
    senderPort.write(newlineArray);
    senderPort.waitForBytesWritten(waitMsecs);
    QTest::qSleep(waitMsecs);
    receiverPort.waitForReadyRead(waitMsecs);
    QCOMPARE(receiverPort.bytesAvailable(), qint64(newlineArray.size()));

    receiverPort.write(receiverPort.readAll());
    receiverPort.waitForBytesWritten(waitMsecs);
    QTest::qSleep(waitMsecs);
    senderPort.waitForReadyRead(waitMsecs);
    QCOMPARE(senderPort.bytesAvailable(), qint64(newlineArray.size()));
    QCOMPARE(senderPort.readAll(), newlineArray);

    // second stage
    senderPort.write(newlineArray);
    senderPort.waitForBytesWritten(waitMsecs);
    QTest::qSleep(waitMsecs);
    receiverPort.waitForReadyRead(waitMsecs);
    QCOMPARE(receiverPort.bytesAvailable(), qint64(newlineArray.size()));
    receiverPort.write(receiverPort.readAll());
    receiverPort.waitForBytesWritten(waitMsecs);
    QTest::qSleep(waitMsecs);
    senderPort.waitForReadyRead(waitMsecs);
    QCOMPARE(senderPort.bytesAvailable(), qint64(newlineArray.size()));
    QCOMPARE(senderPort.readAll(), newlineArray);
}

void tst_QSerialPort::synchronousReadWrite()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));

    QByteArray writeData;
    for (int i = 0; i < 1024; ++i)
        writeData.append(static_cast<char>(i));

    senderPort.write(writeData);
    senderPort.waitForBytesWritten(-1);

    QByteArray readData;
    while ((readData.size() < writeData.size()) && receiverPort.waitForReadyRead(100))
        readData.append(receiverPort.readAll());

    QCOMPARE(readData, writeData);
}

void tst_QSerialPort::asynchronousWriteByBytesWritten_data()
{
    QTest::addColumn<Qt::ConnectionType>("readConnectionType");
    QTest::addColumn<Qt::ConnectionType>("writeConnectionType");

    QTest::newRow("BothQueued") << Qt::QueuedConnection << Qt::QueuedConnection;
    QTest::newRow("BothDirect") << Qt::DirectConnection << Qt::DirectConnection;
    QTest::newRow("ReadDirectWriteQueued") << Qt::DirectConnection << Qt::QueuedConnection;
    QTest::newRow("ReadQueuedWriteDirect") << Qt::QueuedConnection << Qt::DirectConnection;
}

void tst_QSerialPort::asynchronousWriteByBytesWritten()
{
    QFETCH(Qt::ConnectionType, readConnectionType);
    QFETCH(Qt::ConnectionType, writeConnectionType);

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));
    AsyncReader reader(receiverPort, readConnectionType, alphabetArray.size());

    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));
    AsyncWriterByBytesWritten writer(senderPort, writeConnectionType, alphabetArray);

    enterLoop(1);
    QVERIFY2(!timeout(), "Timed out when waiting for the read or write.");
    QCOMPARE(receiverPort.bytesAvailable(), qint64(alphabetArray.size()));
    QCOMPARE(receiverPort.readAll(), alphabetArray);
}


void tst_QSerialPort::asynchronousWriteByTimer_data()
{
    QTest::addColumn<Qt::ConnectionType>("readConnectionType");
    QTest::addColumn<Qt::ConnectionType>("writeConnectionType");

    QTest::newRow("BothQueued") << Qt::QueuedConnection << Qt::QueuedConnection;
    QTest::newRow("BothDirect") << Qt::DirectConnection << Qt::DirectConnection;
    QTest::newRow("ReadDirectWriteQueued") << Qt::DirectConnection << Qt::QueuedConnection;
    QTest::newRow("ReadQueuedWriteDirect") << Qt::QueuedConnection << Qt::DirectConnection;
}

void tst_QSerialPort::asynchronousWriteByTimer()
{
    QFETCH(Qt::ConnectionType, readConnectionType);
    QFETCH(Qt::ConnectionType, writeConnectionType);

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));
    AsyncReader reader(receiverPort, readConnectionType, alphabetArray.size());

    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));
    AsyncWriterByTimer writer(senderPort, writeConnectionType, alphabetArray);

    enterLoop(1);
    QVERIFY2(!timeout(), "Timed out when waiting for the read or write.");
    QCOMPARE(receiverPort.bytesAvailable(), qint64(alphabetArray.size()));
    QCOMPARE(receiverPort.readAll(), alphabetArray);
}


void tst_QSerialPort::asyncReadWithLimitedReadBufferSize()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));

    receiverPort.setReadBufferSize(1);
    QCOMPARE(receiverPort.readBufferSize(), qint64(1));

    AsyncReader2 reader(receiverPort, alphabetArray);

    QCOMPARE(senderPort.write(alphabetArray), qint64(alphabetArray.size()));

    enterLoop(1);
    QVERIFY2(!timeout(), "Timed out when waiting for the read or write.");
}

void tst_QSerialPort::readBufferOverflow()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));

    const int readBufferSize = alphabetArray.size() / 2;
    receiverPort.setReadBufferSize(readBufferSize);
    QCOMPARE(receiverPort.readBufferSize(), qint64(readBufferSize));

    QCOMPARE(senderPort.write(alphabetArray), qint64(alphabetArray.size()));
    QVERIFY2(senderPort.waitForBytesWritten(100), "Waiting for bytes written failed");

    QByteArray readData;
    while (receiverPort.waitForReadyRead(100)) {
        QVERIFY(receiverPort.bytesAvailable() > 0);
        readData += receiverPort.readAll();
    }

    QCOMPARE(readData, alphabetArray);

    // No more bytes available
    QVERIFY(receiverPort.bytesAvailable() == 0);
}

void tst_QSerialPort::readAfterInputClear()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));

    const int readBufferSize = alphabetArray.size() / 2;
    receiverPort.setReadBufferSize(readBufferSize);
    QCOMPARE(receiverPort.readBufferSize(), qint64(readBufferSize));

    const int waitMsecs = 100;

    // First write more than read buffer size
    QCOMPARE(senderPort.write(alphabetArray), qint64(alphabetArray.size()));
    QVERIFY2(senderPort.waitForBytesWritten(waitMsecs), "Waiting for bytes written failed");

    // Wait for first part of data into read buffer
    while (receiverPort.waitForReadyRead(waitMsecs));
    QCOMPARE(receiverPort.bytesAvailable(), qint64(readBufferSize));
    // Wait for second part of data into driver's FIFO
    QTest::qSleep(waitMsecs);

    QVERIFY(receiverPort.clear(QSerialPort::Input));
    QCOMPARE(receiverPort.bytesAvailable(), qint64(0));

    // Second write less than read buffer size
    QCOMPARE(senderPort.write(newlineArray), qint64(newlineArray.size()));
    QVERIFY2(senderPort.waitForBytesWritten(waitMsecs), "Waiting for bytes written failed");

    while (receiverPort.waitForReadyRead(waitMsecs));
    QCOMPARE(receiverPort.bytesAvailable(), qint64(newlineArray.size()));
    QCOMPARE(receiverPort.readAll(), newlineArray);

    // No more bytes available
    QVERIFY(receiverPort.bytesAvailable() == 0);
}



void tst_QSerialPort::synchronousReadWriteAfterAsynchronousReadWrite()
{
    MasterTransactor master(m_senderPortName);
    auto slave = new SlaveTransactor(m_receiverPortName);

    QThread thread;
    slave->moveToThread(&thread);
    thread.start();

    QObject::connect(&thread, &QThread::finished, slave, &SlaveTransactor::deleteLater);
    QObject::connect(slave, &SlaveTransactor::ready, &master, &MasterTransactor::open);

    QMetaObject::invokeMethod(slave, "open", Qt::QueuedConnection);

    tst_QSerialPort::enterLoopMsecs(2000);

    thread.quit();
    thread.wait();

    QVERIFY2(!timeout(), "Timed out when testing of transactions.");
}



void tst_QSerialPort::controlBreak()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::WriteOnly));
    QCOMPARE(senderPort.isBreakEnabled(), false);

    QSignalSpy breakSpy(&senderPort, &QSerialPort::breakEnabledChanged);
    QVERIFY(breakSpy.isValid());

    QSerialPort receiverPort(m_receiverPortName);
    QVERIFY(receiverPort.open(QSerialPort::ReadOnly));

    BreakReader reader(receiverPort);

    QVERIFY(senderPort.setBreakEnabled(true));
    QCOMPARE(senderPort.isBreakEnabled(), true);

    enterLoop(1);
    QVERIFY2(!timeout(), "Timed out when waiting for the read of break state.");
    QVERIFY(receiverPort.bytesAvailable() > 0);

    const QByteArray actual = receiverPort.readAll();
    const QByteArray expected(actual.size(), '\0');
    QCOMPARE(actual, expected);

    QVERIFY(senderPort.setBreakEnabled(false));
    QCOMPARE(senderPort.isBreakEnabled(), false);

    QCOMPARE(breakSpy.count(), 2);
    QCOMPARE(qvariant_cast<bool>(breakSpy.at(0).at(0)), true);
    QCOMPARE(qvariant_cast<bool>(breakSpy.at(1).at(0)), false);
}

void tst_QSerialPort::clearAfterOpen()
{
    QSerialPort senderPort(m_senderPortName);
    QVERIFY(senderPort.open(QSerialPort::ReadWrite));
    QCOMPARE(senderPort.error(), QSerialPort::NoError);
    QVERIFY(senderPort.clear());
    QCOMPARE(senderPort.error(), QSerialPort::NoError);
}

void tst_QSerialPort::readWriteWithDifferentBaudRate_data()
{
    QTest::addColumn<int>("senderBaudRate");
    QTest::addColumn<int>("receiverBaudRate");
    QTest::addColumn<bool>("expectedResult");

    QTest::newRow("9600, 9600") << 9600 << 9600 << true;
    QTest::newRow("115200, 115200") << 115200 << 115200 << true;
    QTest::newRow("9600, 115200") << 9600 << 115200 << false;

    QTest::newRow("31250, 31250") << 31250 << 31250 << true; // custom baudrate (MIDI)
    QTest::newRow("31250, 115200") << 31250 << 115200 << false;

#ifdef Q_OS_LINUX
    QTest::newRow("14400, 14400") << 14400 << 14400 << true; // custom baudrate for Linux
    QTest::newRow("14400, 115200") << 14400 << 115200 << false;
#endif
}

void tst_QSerialPort::readWriteWithDifferentBaudRate()
{
    QFETCH(int, senderBaudRate);
    QFETCH(int, receiverBaudRate);
    QFETCH(bool, expectedResult);

    {
        // setup before opening
        QSerialPort senderSerialPort(m_senderPortName);
        QVERIFY(senderSerialPort.setBaudRate(senderBaudRate));
        QCOMPARE(senderSerialPort.baudRate(), senderBaudRate);
        QVERIFY(senderSerialPort.open(QSerialPort::ReadWrite));
        QSerialPort receiverSerialPort(m_receiverPortName);
        QVERIFY(receiverSerialPort.setBaudRate(receiverBaudRate));
        QCOMPARE(receiverSerialPort.baudRate(), receiverBaudRate);
        QVERIFY(receiverSerialPort.open(QSerialPort::ReadWrite));

        QCOMPARE(senderSerialPort.write(alphabetArray), qint64(alphabetArray.size()));
        QVERIFY(senderSerialPort.waitForBytesWritten(500));

        do {
            QVERIFY(receiverSerialPort.waitForReadyRead(500));
        } while (receiverSerialPort.bytesAvailable() < alphabetArray.size());

        if (expectedResult)
            QVERIFY(receiverSerialPort.readAll() == alphabetArray);
        else
            QVERIFY(receiverSerialPort.readAll() != alphabetArray);
    }

    {
        // setup after opening
        QSerialPort senderSerialPort(m_senderPortName);
        QVERIFY(senderSerialPort.open(QSerialPort::ReadWrite));
        QVERIFY(senderSerialPort.setBaudRate(senderBaudRate));
        QCOMPARE(senderSerialPort.baudRate(), senderBaudRate);
        QSerialPort receiverSerialPort(m_receiverPortName);
        QVERIFY(receiverSerialPort.open(QSerialPort::ReadWrite));
        QVERIFY(receiverSerialPort.setBaudRate(receiverBaudRate));
        QCOMPARE(receiverSerialPort.baudRate(), receiverBaudRate);

        QCOMPARE(senderSerialPort.write(alphabetArray), qint64(alphabetArray.size()));
        QVERIFY(senderSerialPort.waitForBytesWritten(500));

        do {
            QVERIFY(receiverSerialPort.waitForReadyRead(500));
        } while (receiverSerialPort.bytesAvailable() < alphabetArray.size());

        if (expectedResult)
            QVERIFY(receiverSerialPort.readAll() == alphabetArray);
        else
            QVERIFY(receiverSerialPort.readAll() != alphabetArray);
    }
}

QTEST_MAIN(tst_QSerialPort)

//#include "tst_qserialport.moc"
 