#include "tst_dumpcpp.h"



// A simple test to verify that an object can be instantiated and interacted with
void tst_dumpcpp::toggleAddressBar()
{
    SHDocVw::WebBrowser* webBrowser = new SHDocVw::WebBrowser;
    QVERIFY(webBrowser);
    bool addressBar = webBrowser->AddressBar();
    addressBar = !addressBar;
    webBrowser->SetAddressBar(addressBar);
    QVERIFY(webBrowser->AddressBar() == addressBar);
    delete webBrowser;
}

QTEST_MAIN(tst_dumpcpp)

