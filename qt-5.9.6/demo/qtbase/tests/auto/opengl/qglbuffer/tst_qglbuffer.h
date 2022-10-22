#pragma once


#include <QtTest/QtTest>
#include <QtOpenGL/qgl.h>
#include <QtOpenGL/qglbuffer.h>

class tst_QGLBuffer : public QObject
{
    Q_OBJECT
public:
    tst_QGLBuffer() {}
    ~tst_QGLBuffer() {}

private slots:
    void vertexBuffer_data();
    void vertexBuffer();
    void indexBuffer_data();
    void indexBuffer();
    void bufferSharing();

private:
    void testBuffer(QGLBuffer::Type type);
};

