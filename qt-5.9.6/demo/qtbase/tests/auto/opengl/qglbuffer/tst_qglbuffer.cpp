#include "tst_qglbuffer.h"


void tst_QGLBuffer::vertexBuffer_data()
{
    QTest::addColumn<int>("usagePattern");

    QTest::newRow("StreamDraw") << int(QGLBuffer::StreamDraw);
    QTest::newRow("StaticDraw") << int(QGLBuffer::StaticDraw);
    QTest::newRow("DynamicDraw") << int(QGLBuffer::DynamicDraw);
}

void tst_QGLBuffer::vertexBuffer()
{
    testBuffer(QGLBuffer::VertexBuffer);
}

void tst_QGLBuffer::indexBuffer_data()
{
    vertexBuffer_data();
}

void tst_QGLBuffer::indexBuffer()
{
    testBuffer(QGLBuffer::IndexBuffer);
}

void tst_QGLBuffer::testBuffer(QGLBuffer::Type type)
{
    QFETCH(int, usagePattern);

    QGLWidget w;
    w.makeCurrent();

    // Create the local object, but not the buffer in the server.
    QGLBuffer buffer(type);
    QCOMPARE(buffer.usagePattern(), QGLBuffer::StaticDraw);
    buffer.setUsagePattern(QGLBuffer::UsagePattern(usagePattern));

    // Check the initial state.
    QCOMPARE(buffer.type(), type);
    QVERIFY(!buffer.isCreated());
    QCOMPARE(buffer.bufferId(), GLuint(0));
    QCOMPARE(buffer.usagePattern(), QGLBuffer::UsagePattern(usagePattern));
    QCOMPARE(buffer.size(), -1);

    // Should not be able to bind it yet because it isn't created.
    QVERIFY(!buffer.bind());

    // Create the buffer - if this fails, then assume that the
    // GL implementation does not support buffers at all.
    if (!buffer.create())
        QSKIP("Buffers are not supported on this platform");

    // Should now have a buffer id.
    QVERIFY(buffer.bufferId() != 0);

    // Bind the buffer and upload some data.
    QVERIFY(buffer.bind());
    static GLfloat const data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    buffer.allocate(data, sizeof(data));

    // Check the buffer size.
    QCOMPARE(buffer.size(), int(sizeof(data)));

    // Map the buffer and read back its contents.
    bool haveMap = false;
    GLfloat *mapped = reinterpret_cast<GLfloat *>
        (buffer.map(QGLBuffer::ReadOnly));
    if (mapped) {
        for (int index = 0; index < 9; ++index)
            QCOMPARE(mapped[index], data[index]);
        buffer.unmap();
        haveMap = true;
    } else {
        qWarning("QGLBuffer::map() is not supported on this platform");
    }

    // Read back the buffer contents using read().
    bool haveRead = false;
    GLfloat readdata[9];
    if (buffer.read(0, readdata, sizeof(readdata))) {
        for (int index = 0; index < 9; ++index)
            QCOMPARE(readdata[index], data[index]);
        haveRead = true;
    } else {
        qWarning("QGLBuffer::read() is not supported on this platform");
    }

    // Write some different data to a specific location and check it.
    static GLfloat const diffdata[] = {11, 12, 13};
    buffer.write(sizeof(GLfloat) * 3, diffdata, sizeof(diffdata));
    if (haveMap) {
        mapped = reinterpret_cast<GLfloat *>(buffer.map(QGLBuffer::ReadOnly));
        QVERIFY(mapped != 0);
        for (int index = 0; index < 9; ++index) {
            if (index >= 3 && index <= 5)
                QCOMPARE(mapped[index], diffdata[index - 3]);
            else
                QCOMPARE(mapped[index], data[index]);
        }
        buffer.unmap();
    }
    if (haveRead) {
        QVERIFY(buffer.read(0, readdata, sizeof(readdata)));
        for (int index = 0; index < 9; ++index) {
            if (index >= 3 && index <= 5)
                QCOMPARE(readdata[index], diffdata[index - 3]);
            else
                QCOMPARE(readdata[index], data[index]);
        }
    }

    // Write to the buffer using the return value from map.
    if (haveMap) {
        mapped = reinterpret_cast<GLfloat *>(buffer.map(QGLBuffer::WriteOnly));
        QVERIFY(mapped != 0);
        mapped[6] = 14;
        buffer.unmap();

        mapped = reinterpret_cast<GLfloat *>(buffer.map(QGLBuffer::ReadOnly));
        QVERIFY(mapped != 0);
        static GLfloat const diff2data[] = {11, 12, 13, 14};
        for (int index = 0; index < 9; ++index) {
            if (index >= 3 && index <= 6)
                QCOMPARE(mapped[index], diff2data[index - 3]);
            else
                QCOMPARE(mapped[index], data[index]);
        }
        buffer.unmap();
    }

    // Resize the buffer.
    buffer.allocate(sizeof(GLfloat) * 20);
    QCOMPARE(buffer.size(), int(sizeof(GLfloat) * 20));
    buffer.allocate(0, sizeof(GLfloat) * 32);
    QCOMPARE(buffer.size(), int(sizeof(GLfloat) * 32));

    // Release the buffer.
    buffer.release();
}

void tst_QGLBuffer::bufferSharing()
{
#if defined(Q_OS_WIN)
    // Needs investigation on Windows: QTBUG-29692
    QSKIP("Unreproducible timeout on Windows (MSVC/MinGW) CI bots");
#endif

#if defined(Q_OS_QNX)
    QSKIP("Crashes on QNX when destroying the second QGLWidget (see QTBUG-38275)");
#endif

    QGLWidget *w1 = new QGLWidget();
    w1->makeCurrent();

    QGLWidget *w2 = new QGLWidget(0, w1);
    if (!w2->isSharing()) {
        delete w2;
        delete w1;
        QSKIP("Context sharing is not supported on this platform");
    }

    // Bind the buffer in the first context and write some data to it.
    QGLBuffer buffer(QGLBuffer::VertexBuffer);
    if (!buffer.create())
        QSKIP("Buffers are not supported on this platform");
    QVERIFY(buffer.isCreated());
    QVERIFY(buffer.bind());
    static GLfloat const data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    buffer.allocate(data, sizeof(data));
    QCOMPARE(buffer.size(), int(sizeof(data)));
    buffer.release();

    // Bind the buffer in the second context and read back the data.
    w2->makeCurrent();
    QVERIFY(buffer.bind());
    QCOMPARE(buffer.size(), int(sizeof(data)));
    GLfloat readdata[9];
    if (buffer.read(0, readdata, sizeof(readdata))) {
        for (int index = 0; index < 9; ++index)
            QCOMPARE(readdata[index], data[index]);
    }
    buffer.release();

    // Delete the first context.
    delete w1;

    // Make the second context current again because deleting the first
    // one will call doneCurrent() even though it wasn't current!
    w2->makeCurrent();

    // The buffer should still be valid in the second context.
    QVERIFY(buffer.bufferId() != 0);
    QVERIFY(buffer.isCreated());
    QVERIFY(buffer.bind());
    QCOMPARE(buffer.size(), int(sizeof(data)));
    buffer.release();

    // Delete the second context.
    delete w2;

    // The buffer should now be invalid.
    QCOMPARE(buffer.bufferId(), GLuint(0));
    QVERIFY(!buffer.isCreated());
}

QTEST_MAIN(tst_QGLBuffer)

