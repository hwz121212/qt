#include "tst_toolsupport.h"


void tst_toolsupport::offsets()
{
    QFETCH(size_t, actual);
    QFETCH(int, expected32);
    QFETCH(int, expected64);
    size_t expect = sizeof(void *) == 4 ? expected32 : expected64;
    QCOMPARE(actual, expect);
}

void tst_toolsupport::offsets_data()
{
    QTest::addColumn<size_t>("actual");
    QTest::addColumn<int>("expected32");
    QTest::addColumn<int>("expected64");

    {
        QTestData &data = QTest::newRow("sizeof(QObjectData)")
                << sizeof(QObjectData);
        data << 28 << 48; // vptr + 3 ptr + 2 int + ptr
    }

#if RUN_MEMBER_OFFSET_TEST
    {
        QTestData &data = QTest::newRow("QObjectPrivate::extraData")
                << pmm_to_offsetof(&QObjectPrivate::extraData);
        data << 28 << 48;    // sizeof(QObjectData)
    }

    {
        QTestData &data = QTest::newRow("QFileInfoPrivate::fileEntry")
                << pmm_to_offsetof(&QFileInfoPrivate::fileEntry);
        data << 4 << 8;
    }

    {
        QTestData &data = QTest::newRow("QFileSystemEntry::filePath")
                << pmm_to_offsetof(&QFileSystemEntry::m_filePath);
        data << 0 << 0;
    }

#ifdef Q_OS_LINUX
    {
        QTestData &data = QTest::newRow("QFilePrivate::fileName")
                << pmm_to_offsetof(&QFilePrivate::fileName);
#ifdef Q_PROCESSOR_X86
        // x86 32-bit has weird alignment rules. Refer to QtPrivate::AlignOf in
        // qglobal.h for more details.
        data << 168 << 248;
#else
        data << 172 << 248;
#endif
    }
#endif

    {
        QTest::newRow("QDateTimePrivate::m_msecs")
            << pmm_to_offsetof(&QDateTimePrivate::m_msecs) << 0 << 0;
        QTest::newRow("QDateTimePrivate::m_status")
            << pmm_to_offsetof(&QDateTimePrivate::m_status) << 8 << 8;
        QTest::newRow("QDateTimePrivate::m_offsetFromUtc")
            << pmm_to_offsetof(&QDateTimePrivate::m_offsetFromUtc) << 12 << 12;
        QTest::newRow("QDateTimePrivate::m_timeZone")
            << pmm_to_offsetof(&QDateTimePrivate::m_timeZone) << 20 << 24;
    }
#endif // RUN_MEMBER_OFFSET_TEST
}


QTEST_APPLESS_MAIN(tst_toolsupport);

