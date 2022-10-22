#pragma once

#include <QtTest/QtTest>
#include <QtGui/QBitmap>
#include <QtGui/QPalette>
#include <QtGui/QPixmap>
#include <QtGui/QPicture>
#include <QtGui/QTextLength>
#include <QtGui/QPainter>
#include <QtGui/QPen>
#include <QtGui/QCursor>
#include <QtGui/QIcon>
#include <QtGui/QKeySequence>




class tst_QDataStream : public QObject
{
Q_OBJECT

public:
    void stream_data(int noOfElements);

public slots:
    void initTestCase();
    void cleanupTestCase();

private slots:
    void getSetCheck();
    void stream_bool_data();
    void stream_bool();

    void stream_QBitArray_data();
    void stream_QBitArray();

    void stream_QBrush_data();
    void stream_QBrush();

    void stream_QColor_data();
    void stream_QColor();

    void stream_QByteArray_data();
    void stream_QByteArray();

#ifndef QT_NO_CURSOR
    void stream_QCursor_data();
    void stream_QCursor();
#endif

    void stream_QDate_data();
    void stream_QDate();

    void stream_QTime_data();
    void stream_QTime();

    void stream_QDateTime_data();
    void stream_QDateTime();

    void stream_nullptr_t_data();
    void stream_nullptr_t();

    void stream_QFont_data();
    void stream_QFont();

    void stream_QImage_data();
    void stream_QImage();

    void stream_QPen_data();
    void stream_QPen();

    void stream_QPixmap_data();
    void stream_QPixmap();

    void stream_QPoint_data();
    void stream_QPoint();

    void stream_QRect_data();
    void stream_QRect();

    void stream_QPolygon_data();
    void stream_QPolygon();

    void stream_QRegion_data();
    void stream_QRegion();

    void stream_QSize_data();
    void stream_QSize();

    void stream_QString_data();
    void stream_QString();

    void stream_QRegExp_data();
    void stream_QRegExp();

    void stream_Map_data();
    void stream_Map();

    void stream_Hash_data();
    void stream_Hash();

    void stream_qint64_data();
    void stream_qint64();

    void stream_QIcon_data();
    void stream_QIcon();

    void stream_QEasingCurve_data();
    void stream_QEasingCurve();

    void stream_atEnd_data();
    void stream_atEnd();

    void stream_writeError();

    void stream_QByteArray2();

    void setVersion_data();
    void setVersion();

    void skipRawData_data();
    void skipRawData();

    void status_qint8_data();
    void status_qint8();
    void status_qint16_data();
    void status_qint16();
    void status_qint32_data();
    void status_qint32();
    void status_qint64_data();
    void status_qint64();

    void status_float_data();
    void status_float();
    void status_double_data();
    void status_double();

    void status_charptr_QByteArray_data();
    void status_charptr_QByteArray();

    void status_QString_data();
    void status_QString();

    void status_QBitArray_data();
    void status_QBitArray();

    void status_QHash_QMap();

    void status_QLinkedList_QList_QVector();

    void streamToAndFromQByteArray();

    void streamRealDataTypes();

    void floatingPointPrecision();

    void compatibility_Qt3();
    void compatibility_Qt2();

    void floatingPointNaN();

    void transaction_data();
    void transaction();
    void nestedTransactionsResult_data();
    void nestedTransactionsResult();

private:
    void writebool(QDataStream *s);
    void writeQBitArray(QDataStream *s);
    void writeQBrush(QDataStream *s);
    void writeQColor(QDataStream *s);
    void writeQByteArray(QDataStream *s);
    void writenullptr_t(QDataStream *s);
#ifndef QT_NO_CURSOR
    void writeQCursor(QDataStream *s);
#endif
    void writeQWaitCursor(QDataStream *s);
    void writeQDate(QDataStream *s);
    void writeQTime(QDataStream *s);
    void writeQDateTime(QDataStream *s);
    void writeQFont(QDataStream *s);
    void writeQImage(QDataStream *s);
    void writeQPen(QDataStream *s);
    void writeQPixmap(QDataStream *s);
    void writeQPoint(QDataStream *s);
    void writeQRect(QDataStream *s);
    void writeQPolygon(QDataStream *s);
    void writeQRegion(QDataStream *s);
    void writeQSize(QDataStream *s);
    void writeQString(QDataStream* dev);
    void writeQRegExp(QDataStream* dev);
    void writeMap(QDataStream* dev);
    void writeHash(QDataStream* dev);
    void writeqint64(QDataStream *s);
    void writeQIcon(QDataStream *s);
    void writeQEasingCurve(QDataStream *s);

    void readbool(QDataStream *s);
    void readQBitArray(QDataStream *s);
    void readQBrush(QDataStream *s);
    void readQColor(QDataStream *s);
    void readQByteArray(QDataStream *s);
    void readnullptr_t(QDataStream *s);
#ifndef QT_NO_CURSOR
    void readQCursor(QDataStream *s);
#endif
    void readQDate(QDataStream *s);
    void readQTime(QDataStream *s);
    void readQDateTime(QDataStream *s);
    void readQFont(QDataStream *s);
    void readQImage(QDataStream *s);
    void readQPen(QDataStream *s);
    void readQPixmap(QDataStream *s);
    void readQPoint(QDataStream *s);
    void readQRect(QDataStream *s);
    void readQPolygon(QDataStream *s);
    void readQRegion(QDataStream *s);
    void readQSize(QDataStream *s);
    void readQString(QDataStream *s);
    void readQRegExp(QDataStream *s);
    void readMap(QDataStream *s);
    void readHash(QDataStream *s);
    void readqint64(QDataStream *s);
    void readQIcon(QDataStream *s);
    void readQEasingCurve(QDataStream *s);

private:
    QSharedPointer<QTemporaryDir> m_tempDir;
    QString m_previousCurrent;
};
