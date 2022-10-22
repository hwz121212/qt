#include "tst_qprintdevice.h"


void tst_QPrintDevice::basics()
{
#ifndef QT_NO_PRINTER
    QPlatformPrinterSupport *ps = QPlatformPrinterSupportPlugin::get();
    if (!ps)
        QSKIP("Could not load platform plugin");

    QString defaultId = ps->defaultPrintDeviceId();
    if (defaultId.isEmpty()) {
        qDebug() << "No default printer found";
    } else {
        QVERIFY(ps->availablePrintDeviceIds().contains(defaultId));
    }

    qDebug() << "Available Printer IDs :" << ps->availablePrintDeviceIds();

    // Just exercise the api for now as we don't know what is installed
    foreach (const QString id, ps->availablePrintDeviceIds()) {
        QPrintDevice printDevice = ps->createPrintDevice(id);
        const char quote = id == defaultId ? '*' : '"';
        qDebug().noquote().nospace() << "\nCreated printer " << quote << id
            << quote << ":\n" << printDevice << '\n';
        QCOMPARE(printDevice.isValid(), true);
        printDevice.id();
        printDevice.name();
        printDevice.location();
        printDevice.makeAndModel();
        printDevice.isValid();
        printDevice.isDefault();
        printDevice.isRemote();
        printDevice.state();
        printDevice.supportsMultipleCopies();
        printDevice.supportsCollateCopies();
        printDevice.defaultPageSize();
        printDevice.supportedPageSizes();
        printDevice.supportsCustomPageSizes();
        printDevice.minimumPhysicalPageSize();
        printDevice.maximumPhysicalPageSize();
        printDevice.defaultResolution();
        printDevice.supportedResolutions();
        printDevice.defaultInputSlot();
        printDevice.supportedInputSlots();
        printDevice.defaultOutputBin();
        printDevice.supportedOutputBins();
        printDevice.defaultDuplexMode();
        printDevice.supportedDuplexModes();
        printDevice.defaultColorMode();
        printDevice.supportedColorModes();
        printDevice.supportedMimeTypes();
    }
#endif // QT_NO_PRINTER
}

QTEST_MAIN(tst_QPrintDevice)
