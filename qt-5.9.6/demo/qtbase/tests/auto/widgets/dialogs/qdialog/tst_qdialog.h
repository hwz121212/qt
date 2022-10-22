#pragma once

#define QT_GUI_LIB
#define QT_WIDGETS_LIB
#include <QtTest/QtTest>

#include <qdialog.h>
#include <qapplication.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qstyle.h>
#include <QVBoxLayout>
#include <QSizeGrip>
#include <QDesktopWidget>
#include <QGraphicsProxyWidget>
#include <QGraphicsView>
#include <QWindow>
#include <private/qguiapplication_p.h>
#include <qpa/qplatformtheme.h>
#include <qpa/qplatformtheme_p.h>

QT_FORWARD_DECLARE_CLASS(QDialog)

// work around function being protected
class DummyDialog : public QDialog
{
public:
    DummyDialog(): QDialog() {}
    using QDialog::showExtension;
};

class tst_QDialog : public QObject
{
    Q_OBJECT
public:
    tst_QDialog();

private slots:
    void cleanup();
    void getSetCheck();
    void showExtension_data();
    void showExtension();
    void defaultButtons();
    void showMaximized();
    void showMinimized();
    void showFullScreen();
    void showAsTool();
    void toolDialogPosition();
    void deleteMainDefault();
    void deleteInExec();
#if QT_CONFIG(sizegrip)
    void showSizeGrip();
#endif
    void setVisible();
    void reject();
    void snapToDefaultButton();
    void transientParent_data();
    void transientParent();
    void dialogInGraphicsView();
};
