#pragma once


#define QT_GUI_LIB
#define QT_WIDGETS_LIB

#include <QtTest/QtTest>
#include <qtextbrowser.h>
#include <qdatetime.h>
#include <qapplication.h>
#include <qscrollbar.h>

#include <qtextbrowser.h>
#include <qtextobject.h>

class TestBrowser : public QTextBrowser
{
public:
    inline TestBrowser() : htmlLoadAttempts(0) {
        show();
        QApplication::setActiveWindow(this);
        activateWindow();
        setFocus();
        QVERIFY(QTest::qWaitForWindowActive(this));
        QVERIFY(hasFocus());
    }

    virtual QVariant loadResource(int type, const QUrl &name);

    int htmlLoadAttempts;
    QUrl lastResource;
    QUrl sourceInsideLoadResource;
};


class tst_QTextBrowser : public QObject
{
	Q_OBJECT

private slots:
	void init();
	void cleanup();

	void noReloadOnAnchorJump();
	void bgColorOnSourceChange();
	void forwardButton();
	void viewportPositionInHistory();
	void relativeLinks();
	void anchors();
	void resourceAutoDetection();
	void forwardBackwardAvailable();
	void clearHistory();
	void sourceInsideLoadResource();
	void textInteractionFlags_vs_readOnly();
	void inputMethodAttribute_vs_readOnly();
	void anchorsWithSelfBuiltHtml();
	void relativeNonLocalUrls();
	void adjacentAnchors();
	void loadResourceOnRelativeLocalFiles();
	void focusIndicator();
	void focusHistory();
	void urlEncoding();

private:
	TestBrowser *browser;
};
