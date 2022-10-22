#pragma once

//TESTED_COMPONENT=src/multimedia

#include <QtTest/QtTest>
#include <private/qwavedecoder_p.h>

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class tst_QWaveDecoder : public QObject
{
    Q_OBJECT
public:
    enum Corruption {
        None = 1,
        NotAWav = 2,
        NoSampleData = 4,
        FormatDescriptor = 8,
        FormatString = 16,
        DataDescriptor = 32
    };

public slots:

    void initTestCase();
    void cleanupTestCase();
    void init();
    void cleanup();

private slots:

    void file_data();
    void file();

    void http_data() {file_data();}
    void http();

    void readAllAtOnce();
    void readPerByte();
};

