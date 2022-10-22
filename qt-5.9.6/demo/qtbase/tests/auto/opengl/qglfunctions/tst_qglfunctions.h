#pragma once

#include <QtTest/QtTest>
#include <QtOpenGL/qglfunctions.h>

class tst_QGLFunctions : public QObject
{
    Q_OBJECT
public:
    tst_QGLFunctions() {}
    ~tst_QGLFunctions() {}

private slots:
    void features();
    void multitexture();
    void blendColor();

private:
    static bool hasExtension(const char *name);
};

