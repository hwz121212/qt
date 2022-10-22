/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "webaxwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGo;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionStop;
    QAction *actionRefresh;
    QAction *actionHome;
    QAction *actionFileClose;
    QAction *actionSearch;
    QAction *actionAbout;
    QAction *actionAddBookmark;
    QAction *actionAboutQt;
    QActionGroup *FileNewGroup;
    QAction *actionNewWindow;
    QWidget *centralWidget;
    QHBoxLayout *hboxLayout;
    QFrame *Frame3;
    QVBoxLayout *vboxLayout;
    WebAxWidget *WebBrowser;
    QToolBar *tbNavigate;
    QToolBar *tbAddress;
    QMenuBar *menubar;
    QMenu *PopupMenu;
    QMenu *FileNewGroup_2;
    QMenu *BookmarksMenu;
    QMenu *HistoryMenu;
    QMenu *unnamed;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(812, 605);
        actionGo = new QAction(MainWindow);
        actionGo->setObjectName(QStringLiteral("actionGo"));
        const QIcon icon = qt_get_icon(image0_ID);
        actionGo->setIcon(icon);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QStringLiteral("actionBack"));
        const QIcon icon1 = qt_get_icon(image1_ID);
        actionBack->setIcon(icon1);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QStringLiteral("actionForward"));
        const QIcon icon2 = qt_get_icon(image2_ID);
        actionForward->setIcon(icon2);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        const QIcon icon3 = qt_get_icon(image3_ID);
        actionStop->setIcon(icon3);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QStringLiteral("actionRefresh"));
        const QIcon icon4 = qt_get_icon(image4_ID);
        actionRefresh->setIcon(icon4);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        const QIcon icon5 = qt_get_icon(image5_ID);
        actionHome->setIcon(icon5);
        actionFileClose = new QAction(MainWindow);
        actionFileClose->setObjectName(QStringLiteral("actionFileClose"));
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        const QIcon icon6 = qt_get_icon(image6_ID);
        actionSearch->setIcon(icon6);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAddBookmark = new QAction(MainWindow);
        actionAddBookmark->setObjectName(QStringLiteral("actionAddBookmark"));
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        FileNewGroup = new QActionGroup(MainWindow);
        FileNewGroup->setObjectName(QStringLiteral("FileNewGroup"));
        actionNewWindow = new QAction(FileNewGroup);
        actionNewWindow->setObjectName(QStringLiteral("actionNewWindow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        hboxLayout = new QHBoxLayout(centralWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setObjectName(QStringLiteral("unnamed"));
        Frame3 = new QFrame(centralWidget);
        Frame3->setObjectName(QStringLiteral("Frame3"));
        Frame3->setFrameShape(QFrame::StyledPanel);
        Frame3->setFrameShadow(QFrame::Sunken);
        vboxLayout = new QVBoxLayout(Frame3);
        vboxLayout->setSpacing(0);
        vboxLayout->setContentsMargins(1, 1, 1, 1);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setObjectName(QStringLiteral("unnamed"));
        WebBrowser = new WebAxWidget(Frame3);
        WebBrowser->setControl(QStringLiteral("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
        WebBrowser->setObjectName(QStringLiteral("WebBrowser"));
        WebBrowser->setFocusPolicy(Qt::StrongFocus);

        vboxLayout->addWidget(WebBrowser);


        hboxLayout->addWidget(Frame3);

        MainWindow->setCentralWidget(centralWidget);
        tbNavigate = new QToolBar(MainWindow);
        tbNavigate->setObjectName(QStringLiteral("tbNavigate"));
        MainWindow->addToolBar(tbNavigate);
        tbAddress = new QToolBar(MainWindow);
        tbAddress->setObjectName(QStringLiteral("tbAddress"));
        MainWindow->addToolBar(tbAddress);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        PopupMenu = new QMenu(menubar);
        PopupMenu->setObjectName(QStringLiteral("PopupMenu"));
        FileNewGroup_2 = new QMenu(PopupMenu);
        FileNewGroup_2->setObjectName(QStringLiteral("FileNewGroup_2"));
        BookmarksMenu = new QMenu(menubar);
        BookmarksMenu->setObjectName(QStringLiteral("BookmarksMenu"));
        HistoryMenu = new QMenu(menubar);
        HistoryMenu->setObjectName(QStringLiteral("HistoryMenu"));
        unnamed = new QMenu(menubar);
        unnamed->setObjectName(QStringLiteral("unnamed"));
        MainWindow->setMenuBar(menubar);

        tbNavigate->addAction(actionBack);
        tbNavigate->addAction(actionForward);
        tbNavigate->addAction(actionStop);
        tbNavigate->addAction(actionRefresh);
        tbNavigate->addAction(actionHome);
        tbNavigate->addSeparator();
        tbNavigate->addAction(actionSearch);
        tbAddress->addAction(actionGo);
        menubar->addAction(PopupMenu->menuAction());
        menubar->addAction(BookmarksMenu->menuAction());
        menubar->addAction(HistoryMenu->menuAction());
        menubar->addAction(unnamed->menuAction());
        PopupMenu->addAction(FileNewGroup_2->menuAction());
        PopupMenu->addSeparator();
        PopupMenu->addAction(actionFileClose);
        FileNewGroup_2->addAction(actionNewWindow);
        BookmarksMenu->addAction(actionAddBookmark);
        BookmarksMenu->addSeparator();
        unnamed->addAction(actionAbout);
        unnamed->addAction(actionAboutQt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt WebBrowser", Q_NULLPTR));
        actionGo->setIconText(QApplication::translate("MainWindow", "Go", Q_NULLPTR));
        actionBack->setIconText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionBack->setShortcut(QApplication::translate("MainWindow", "Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionForward->setIconText(QApplication::translate("MainWindow", "Forward", Q_NULLPTR));
        actionStop->setIconText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        actionRefresh->setIconText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        actionHome->setIconText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        actionFileClose->setIconText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        actionFileClose->setText(QApplication::translate("MainWindow", "C&lose", Q_NULLPTR));
        actionSearch->setIconText(QApplication::translate("MainWindow", "Search", Q_NULLPTR));
        actionAbout->setIconText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionAddBookmark->setText(QApplication::translate("MainWindow", "Add Bookmark", Q_NULLPTR));
        actionAboutQt->setIconText(QApplication::translate("MainWindow", "About Qt", Q_NULLPTR));
        actionNewWindow->setIconText(QApplication::translate("MainWindow", "Window", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionNewWindow->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        tbNavigate->setWindowTitle(QApplication::translate("MainWindow", "Navigation", Q_NULLPTR));
        tbAddress->setWindowTitle(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        PopupMenu->setTitle(QApplication::translate("MainWindow", "&File", Q_NULLPTR));
        FileNewGroup_2->setTitle(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        BookmarksMenu->setTitle(QApplication::translate("MainWindow", "&Bookmarks", Q_NULLPTR));
        HistoryMenu->setTitle(QApplication::translate("MainWindow", "Hi&story", Q_NULLPTR));
        unnamed->setTitle(QApplication::translate("MainWindow", "&Help", Q_NULLPTR));
    } // retranslateUi


protected:
    enum IconID
    {
        image0_ID,
        image1_ID,
        image2_ID,
        image3_ID,
        image4_ID,
        image5_ID,
        image6_ID,
        unknown_ID
    };
    static QPixmap qt_get_icon(IconID id)
    {
    /* XPM */
    static const char* const image0_data[] = { 
"32 32 3 1",
". c None",
"a c #000080",
"# c #808080",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
".......#aaaaaaaaa...............",
"......#aaaaaaaaaaa.........a....",
".....#aaa.......aaa.......aa....",
"....#aaa.........aaaa....aaa....",
"....aaa...........aaaa..aaaa....",
"....aa..............aaaaaaaa....",
"....aa...............aaaaaaa....",
"....aa...............aaaaaaa....",
"....aa..............aaaaaaaa....",
"....aa.............aaaaaaaaa....",
"....#aa...........aaaaaaaaaa....",
".....#aa.........aaaaaaaaaaa....",
"......aa#.......................",
".......aa#......................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................"};


    /* XPM */
    static const char* const image1_data[] = { 
"32 32 142 2",
"Qt c None",
"#O c #0010f7",
"#P c #0021ef",
"#R c #0021f7",
"#S c #0021ff",
"#T c #0029ff",
"ah c #0031ff",
"#N c #0829f7",
"#x c #0831ff",
"#C c #0839ff",
"#E c #1029e7",
"#r c #1039ff",
"#o c #1042ff",
"#Q c #1831de",
"ak c #1831e7",
"#k c #1842ff",
"#H c #184aff",
"aj c #2139e7",
"#s c #2142de",
"#G c #214aff",
".9 c #2152ff",
"#2 c #2939c6",
"ag c #2939d6",
"a# c #2942ce",
"#p c #2942de",
"#U c #2952ff",
"ae c #295aff",
"#y c #3152de",
".2 c #3152e7",
"#I c #315aff",
"#z c #3163ff",
"#1 c #394abd",
"#L c #394ade",
"#B c #3963ff",
"#w c #396bff",
"#V c #4252d6",
"#l c #4252de",
"#W c #4263ef",
"#q c #426bff",
".1 c #4273ff",
"#5 c #4a5ad6",
"#J c #4a73ff",
"#K c #4a7bff",
"ac c #4a84ff",
"ab c #5263c6",
".T c #5263ce",
".M c #5273d6",
".c c #5273e7",
".U c #527bde",
"#t c #527bf7",
"#A c #5284ff",
"#X c #5a63ad",
".V c #5a84ef",
"#F c #5a84ff",
"#v c #5a8cff",
"ad c #636bbd",
".e c #637bc6",
".W c #637bce",
".3 c #637bd6",
".Q c #6384de",
".5 c #638cef",
"#b c #638cff",
"#j c #6394ff",
"af c #6b73bd",
"#0 c #6b73c6",
".S c #6b84ce",
"#u c #6b94ff",
".C c #6b9cff",
"ai c #737bce",
".z c #7384b5",
".j c #7384c6",
"#6 c #738cce",
".4 c #738cd6",
".b c #739ce7",
".I c #73a5ff",
"#n c #73adff",
"#Z c #7b84b5",
".R c #7b8cbd",
".J c #7b94bd",
".n c #7ba5e7",
".P c #7badff",
"#c c #7bb5ff",
"#M c #84849c",
"#3 c #8484ad",
".i c #848cc6",
"al c #8494bd",
"aa c #849cc6",
".y c #84adff",
".O c #84b5ff",
"#a c #84bdff",
".t c #8c94ad",
".a c #8c94b5",
".D c #8c9cbd",
".m c #8c9cce",
".A c #8ca5ef",
".f c #8cadf7",
".H c #8cbdff",
"#D c #9494a5",
"#8 c #9494bd",
"#9 c #9494c6",
"a. c #949cbd",
".r c #94c6ff",
"#d c #94ceff",
"#4 c #9ca5ad",
"#7 c #9ca5b5",
".u c #9cbdf7",
".6 c #9cc6ff",
".0 c #9cceff",
".x c #9cd6ff",
".L c #a5a5b5",
"#Y c #a5a5bd",
"#e c #a5ceff",
"## c #a5d6ff",
".X c #adadb5",
".k c #adc6ff",
"#i c #add6ff",
".E c #b5b5b5",
".d c #b5b5bd",
".K c #b5bdc6",
".F c #b5ceff",
".N c #b5d6ff",
".B c #b5deff",
".s c #bdbdbd",
".# c #bdbdc6",
"#. c #bdd6ff",
".G c #bde7ff",
"#h c #c6e7ff",
"#f c #c6efff",
".w c #c6f7ff",
".h c #ced6ff",
".Y c #cee7ff",
".q c #ceefff",
".Z c #cef7ff",
".l c #d6efff",
".8 c #d6f7ff",
".o c #deefff",
".7 c #def7ff",
"#m c #deffff",
"#g c #e7ffff",
".v c #efffff",
".p c #f7ffff",
".g c #ffffff",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.#.a.b.c.aQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQt.d.e.f.g.h.iQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.d.j.k.g.g.l.mQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQt.a.n.o.g.p.q.r.mQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQt.s.t.u.g.g.v.w.x.y.mQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQt.z.A.g.g.v.B.x.r.C.DQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQt.E.a.F.g.g.v.G.r.H.H.I.JQtQtQtQtQtQtQtQtQtQt.s.s.K.K.KQtQt",
"QtQt.L.M.N.g.g.q.x.H.O.y.P.P.Q.LQtQtQt.s.s.K.a.R.S.T.U.V.V.Q.W.X",
"Qt.#.Q.Y.g.g.Z.0.O.y.P.P.P.P.1.2.3.4.S.e.c.5.f.6.N.l.7.8.Z.0.9.T",
".s.W#..g.p.Z###a.O.P.P.I.I.P#b#c#d#e.B#f#g.7.8.8.q#h#i.r.H#j#k#l",
".e#e.g#m.G#d.O.y.P.I.I.I.I.I.I.H.6####.0.r.H#a.O#c.I#n.I#j.1#o#p",
".5.p#f.x.0.O.y.P.I.I.I.I.I.I.I.I.I.I.I.I.I.I.I.I.I.C.C.C#b#q#r#s",
"#t##.r.H.O#c.P.I.I.I.I.I.I.C.I.C.C.I.C.I.C.C.C.C#u.C#j#j#v#w#x#p",
"#y#z#j.I.I.P.I.I.C.C.C.I.I.C.C#j#b#v#v#b#j#j#j#b#j#v#b#v#A#B#C#p",
"#D#E#k#q#A#j.C.I.C.I.C.C.C.I#F#G#k#k#H#G#I#B.1.1#J#K#K.1#q#z#x#L",
".s#M#N#r#z#K#b#u.C#u.C.C.I.I#B#O#P#Q#E#P#R#S#T#x#r#r#H.9#U#G#T#V",
"QtQt.z#N#r#I.1#v#j#u#j.C#u.I#W#X#D.s#Y#D#Z#0#1#2#Q#P#P#N#N#T#E#3",
"QtQt.s#4#5#x#H#B#K#v#j#j#j#j#6QtQtQtQtQtQtQt.s.s.d.X#7#8#9a..X.s",
"QtQtQtQt.da##S#k#z#J#v#b#j#vaaQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQt.Eab#x#o#I#K#v#vac.iQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQt.sad#E#rae#q#K#wafQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQt.#.Lagah#k#U#kafQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQt#4#Q#T#xahaiQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt#4adajakalQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};


    /* XPM */
    static const char* const image2_data[] = { 
"32 32 142 2",
"Qt c None",
"#Y c #0018e7",
"aa c #0018ef",
"#E c #0018ff",
"#Q c #0021ef",
"#K c #0021ff",
"a# c #0029ff",
"a. c #0829ff",
"#P c #0831ff",
"#4 c #1021d6",
"#R c #1021de",
"#L c #1029d6",
"#V c #1029e7",
"#n c #1039f7",
"#W c #1039ff",
"#O c #1042ff",
"ah c #1831ce",
"#y c #1842ff",
"aj c #2131c6",
"#S c #2131ce",
"#z c #2139de",
".0 c #2142de",
"ai c #2142e7",
".t c #214aef",
"#D c #214aff",
".x c #2152ff",
"al c #2939de",
"#d c #294ae7",
"#I c #2952ff",
"#J c #295aff",
"#T c #3142bd",
"#N c #315aff",
"#s c #3163ff",
"#F c #394ac6",
"#G c #3952d6",
"ag c #395ae7",
".B c #3963f7",
"ae c #3963ff",
".g c #396bff",
"#U c #424ab5",
"#2 c #4252b5",
".J c #425ace",
"#A c #4263de",
".b c #426be7",
"#p c #426bef",
"#x c #426bff",
".n c #4273ff",
".o c #4a63ce",
"#t c #4a6be7",
".Q c #4a73de",
"#3 c #4a73ff",
"#C c #4a7bff",
"#Z c #525abd",
".1 c #526bbd",
".W c #526bc6",
".R c #526bce",
".P c #527be7",
"#w c #5284ff",
"#m c #528cff",
"ac c #5a63bd",
"ak c #5a6bbd",
".O c #5a7bf7",
"#H c #5a84ff",
"#9 c #5a8cff",
"af c #636bb5",
".h c #636bbd",
"ab c #6384ef",
"#v c #638cff",
".w c #6394ff",
".s c #639cff",
"#M c #6b73b5",
".C c #6b73bd",
"#u c #6b9cff",
".c c #737bb5",
".S c #7384ce",
".N c #738ce7",
".a c #7394de",
".8 c #7394ef",
"#8 c #739cf7",
"#B c #739cff",
".A c #73a5ff",
"#0 c #7b84b5",
".T c #7b8cbd",
".9 c #7b94c6",
"#. c #7b94d6",
".7 c #7ba5ff",
".X c #7badff",
".I c #7bb5ff",
"#5 c #848ca5",
".y c #848cad",
".M c #8494b5",
"## c #849cd6",
"#c c #84adff",
".G c #84b5ff",
".Z c #84bdff",
"#o c #8c8cad",
"#a c #8ca5ce",
".Y c #8cb5ff",
".H c #8cbdff",
"#1 c #9494a5",
".U c #9494ad",
"#7 c #949cad",
"#b c #94ade7",
".z c #94c6ff",
".v c #94ceff",
".j c #9c9cad",
".u c #9ca5ad",
"#r c #9cc6ff",
".m c #9cceff",
".d c #a5a5a5",
"#6 c #a5a5ad",
".V c #a5a5b5",
".K c #a5adb5",
".2 c #a5ceff",
".r c #a5d6ff",
".L c #adadad",
".i c #adadb5",
".p c #adadbd",
".q c #addeff",
"#e c #ade7ff",
"#X c #b5b5b5",
".D c #b5b5bd",
".E c #b5b5c6",
".F c #b5bdc6",
".f c #b5deff",
"#q c #b5efff",
".# c #bdbdbd",
"ad c #bdbdc6",
".6 c #bddeff",
"#i c #bde7ff",
"#h c #bdefff",
"#g c #c6f7ff",
"#l c #cee7ff",
"#j c #cef7ff",
"#f c #ceffff",
".k c #d6efff",
"#k c #d6f7ff",
".l c #d6ffff",
".e c #deefff",
".5 c #e7ffff",
".4 c #efffff",
".3 c #f7ffff",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#.a.b.c.#QtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.d.e.f.g.h.iQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.j.k.l.m.n.o.pQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.d.f.q.r.m.s.t.cQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.u.q.v.m.r.m.w.x.y.#QtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.u.z.z.z.z.m.m.A.B.C.DQtQtQtQt",
"QtQt.#.E.F.#.#QtQtQtQtQtQtQtQtQtQt.j.G.H.z.H.z.m.m.I.n.J.KQtQtQt",
".L.M.N.O.P.Q.R.S.T.U.E.#.#QtQtQt.V.W.X.H.Y.H.H.z.z.z.Z.g.0.VQtQt",
".1.2.3.4.5.k.6.2.Y.7.8.a.9#.###a#b.Y.G.G.G.G.Y.G.Y.H.z#c.n#d.u.#",
".b#e#f#g#h#i.f#h#g#g#j#k#k#k.e.4.4#l#c.X.G.G.G.G.G.G.G.H.H#m#n#o",
"#p.m#q.r.m.m.m.z#r.m.z.m.r.q.q.q.m.H.G.G.X#c.G.G.G.X.X.X.X.7#s.J",
"#t.v.q.m.z.H.H.H.H.H.Z.Y.G.G.G.G.G.G.G.X#c.I#c.X.X.X.A.A#u#u.n#d",
"#t.H.r.z.Y.G#c.X.X.X.7.X.X.X.X.X.X.X.X.X.X.X.X.X.7.A#u#v#w#x#y#z",
"#A.I.m.H.X.X.X.A.A#B.A#B#u#u#u#u#B.X#c.X.X.X.X.A.A#u.w#C.g#D#E#F",
"#G.s.G.A.w#v#H#w#C.n#x#s#I#y#y#y#J#H.X.7.X.X.7.A#u.w#w#J#y#K#L.U",
"#M.x.n#N#D#O#P#K#K#Q#Q#R#S#T#U#U#V#W.A.X.A.A#B#u.w.n#D#P#E#L.VQt",
"#X.h#V#Q#Y#R#S#U#Z#0#1.p.#.#.#.#.V#2.s.7.A#u#u.w#3#D#P#E#4#5QtQt",
"QtQt#6#1#7.D.#.#QtQtQtQtQtQtQtQtQt#6#8#B#u.w#9#s#ya.#E#F.V.#QtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#.8#9#H#w#s#Wa#aa#2#XQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#ab#w#C#N#W#K#Eac.#QtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtad.Pae#J#Wa##Vaf#XQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#ag#W#P#Eah#6QtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#ai#K#Eaj.jQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#akalak.iQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};


    /* XPM */
    static const char* const image3_data[] = { 
"25 25 2 1",
"# c #000000",
". c #ffffff",
".........................",
".........................",
".........................",
".........######..........",
".......##########........",
"......####....####.......",
".....###........###......",
"....#####........###.....",
"....##.###........##.....",
"...###..###.......###....",
"...##....###.......##....",
"...##.....###......##....",
"...##......###.....##....",
"...##.......###....##....",
"...###.......###..###....",
"....##........###.##.....",
"....###........#####.....",
".....###........###......",
"......####....####.......",
".......##########........",
".........######..........",
".........................",
".........................",
".........................",
"........................."};


    /* XPM */
    static const char* const image4_data[] = { 
"32 32 3 1",
". c None",
"# c #000080",
"a c #808080",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"...............#########a.......",
"....#.........###########a......",
"....##.......###.......###a.....",
"....###....####.........###a....",
"....####..####...........###....",
"....########..............##....",
"....#######...............##....",
"....#######...............##....",
"....########..............##....",
"....#########.............##....",
"....##########...........##a....",
"....###########.........##a.....",
".......................a##......",
"......................a##.......",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................",
"................................"};


    /* XPM */
    static const char* const image5_data[] = { 
"32 32 211 2",
"Qt c None",
"aJ c #000000",
"#W c #080800",
"#N c #100800",
"#V c #101000",
"#E c #101008",
"#M c #181000",
"#L c #181800",
"#D c #181808",
"#F c #181810",
"as c #211800",
"#K c #211808",
"#J c #212110",
"#G c #212118",
"#q c #212121",
"an c #292100",
"#I c #292110",
"aN c #292910",
"#H c #292918",
"#y c #292921",
"aF c #312900",
"#C c #312918",
"#i c #312929",
".0 c #313131",
"#7 c #393100",
"#U c #393108",
"aG c #393931",
".M c #393939",
"#u c #423939",
"#c c #424a42",
"aE c #4a4200",
"aY c #4a4210",
".V c #4a4239",
"#B c #4a4a39",
".m c #4a4a42",
"aP c #4a5218",
".G c #4a5252",
".z c #4a5a52",
"aO c #524200",
"am c #524a00",
"#T c #524a08",
"#p c #524a4a",
".s c #525252",
"#a c #525a52",
".7 c #52635a",
"#b c #526363",
"az c #5a4a00",
"#6 c #5a5208",
"aw c #5a5210",
".Z c #5a524a",
".L c #5a5a52",
".y c #5a5a5a",
".F c #5a635a",
"#S c #635208",
"ax c #635a10",
".U c #635a52",
".r c #635a5a",
"aZ c #636321",
"## c #63635a",
".A c #636363",
"#h c #636b6b",
"aL c #637329",
"af c #6b5a00",
".6 c #6b635a",
"#o c #6b6363",
".E c #6b6b63",
"a4 c #6b7321",
"aS c #6b7329",
"aR c #6b7331",
"aX c #736300",
"al c #736308",
"#R c #736b10",
".T c #736b63",
"a5 c #737329",
".i c #73736b",
".K c #737373",
"a7 c #737b29",
"#g c #737b73",
"a9 c #7b7318",
"#A c #7b7373",
"a8 c #7b7b21",
"aV c #7b7b29",
"aQ c #7b7b5a",
".J c #7b7b73",
".1 c #7b7b7b",
"b# c #7b8431",
"a3 c #7b844a",
".8 c #7b847b",
"ay c #847308",
"#5 c #847310",
"aT c #847b21",
"b. c #847b29",
".S c #847b73",
".d c #847b7b",
"aW c #848421",
"a1 c #848429",
"a0 c #848431",
"bq c #84844a",
".H c #848484",
"ae c #8c7b08",
"ak c #8c7b10",
"#j c #8c8484",
"ba c #8c8c63",
"a2 c #8c8c7b",
".x c #8c8c84",
".2 c #8c948c",
".9 c #8cada5",
"aC c #947b08",
".Y c #947b73",
"aK c #948c10",
"#Q c #948c18",
"a6 c #948c29",
"#m c #948c84",
"bp c #949442",
"aH c #949484",
".D c #94948c",
".n c #949494",
"bn c #949c4a",
"bl c #949c5a",
"bj c #949c63",
".u c #949c94",
".v c #94a59c",
"aI c #9c8c10",
"#4 c #9c8c18",
"#O c #9c8c29",
"aM c #9c9418",
"#r c #9c948c",
"bo c #9c9c4a",
"bm c #9c9c52",
"bk c #9c9c5a",
"bh c #9c9c6b",
".k c #9c9c94",
".a c #9c9c9c",
"bi c #9ca56b",
"bf c #9ca573",
".h c #9ca59c",
"#f c #9ca5a5",
".B c #9cbdb5",
"#P c #a59400",
"aB c #a59418",
"#k c #a5948c",
"ar c #a59c29",
".N c #a59c8c",
".P c #a59c94",
".W c #a59c9c",
"bg c #a5a573",
"bd c #a5a584",
".q c #a5a59c",
".c c #a5a5a5",
"be c #a5ad7b",
".o c #a5ada5",
".C c #a5adad",
".I c #a5b5ad",
"#d c #a5bdb5",
".w c #a5c6bd",
"ad c #ad9c10",
"aj c #ad9c18",
"#w c #ad9c94",
".f c #ada59c",
"bc c #adad7b",
"bb c #adad84",
".# c #adada5",
".t c #adadad",
".4 c #adb5ad",
"ai c #b5a518",
"aq c #b5a529",
"aD c #b5a542",
"ao c #b5a54a",
".O c #b5a594",
"#v c #b5a59c",
"at c #b5ad52",
"#z c #b5ad9c",
".5 c #b5ada5",
".j c #b5b5ad",
".e c #b5b5b5",
".3 c #b5bdb5",
".Q c #b5bdbd",
"#e c #b5cec6",
"#8 c #bda539",
"#x c #bda59c",
"#3 c #bdad29",
"#X c #bdad31",
"ag c #bdad42",
"#n c #bdb5ad",
".b c #bdbdbd",
".X c #bdcec6",
"aU c #c6b510",
"#. c #c6c6bd",
".p c #c6cece",
".g c #c6ded6",
"ac c #cebd31",
"#l c #ced6ce",
"#s c #ced6d6",
"#t c #cedede",
"#9 c #d6c610",
"#2 c #d6c631",
"ap c #dec608",
"ah c #dece10",
"ab c #dece31",
".l c #deefe7",
".R c #deefef",
"au c #e7ce08",
"a. c #e7d621",
"a# c #e7d631",
"aa c #e7d639",
"#1 c #e7de39",
"#Y c #efde10",
"av c #efde21",
"aA c #efde29",
"#Z c #f7e729",
"#0 c #f7e739",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQt.#.aQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQt.b.c.d.eQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQt.f.g.h.i.bQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQt.j.k.l.e.m.nQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQt.b.a.o.p.q.r.s.tQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQt.u.v.w.k.x.y.z.A.bQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQt.t.k.B.C.k.D.E.F.G.HQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.b.#.#.o.I.b.c.J.K.L.M.tQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.a.N.O.P.Q.R.o.S.T.U.V.s.bQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQt.t.N.P.W.k.X.R.P.Y.i.A.Z.0.1QtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.b.x.2.w.3.4.I.j.#.5.6.L.F.7.0.cQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.n.8.9.p#..o.4.x.x.x##.s#a#b.s#c.bQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQt.t.D.##d#e.h#f.o.P.2.2#g###h.A.z#i.KQtQtQtQtQtQtQt",
"QtQtQtQtQtQt.b#j.P.f.P#k.q.4.X#l#m#n.n#o.J.6#p#i#q.cQtQtQtQtQtQt",
"QtQtQtQtQtQt.W#m#k.O#m#r.5.k#s#t#m.q#r.U.E.T#p#u#i.M.eQtQtQtQtQt",
"QtQtQtQtQt.b.x#r.o.t#v.f.o.4.l#l#w#x.f.i#o.E###a.m#y.nQtQtQtQtQt",
"QtQtQtQtQt.b.e.c#d.o#z.u.q#f.I.q.#.#.2#A.U.m#B#h.h.j.bQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.b#C#D#E#F#G#G#G#H#I#J#K#L#M#N.iQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.b#O#P#Q#R#S#T#U#L#M#V#W#N#V#V.iQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.b#X#Y#Z#0#0#1#2#3#4#5#6#7#M#V#AQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.b#8#9a.a#aaaaabac#3adaeaf#7#M.JQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.bagaha.a##1aaaa#2aiajakalaman#AQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtaoapa.a#aaaqaraq#3aj#5afamas.JQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtatauava#aw#V#W#Max#4ayafazan.JQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtatahaAaB#W#N#M#V#V#RaCalazas.JQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.baDap#Z#Q#N#M#V#M#N#6akafaEaFaG.E#h.JQtQtQtQtQt",
"QtQtQtQtQtQtQtQtaHaIahaAaB#W#W#N#WaJ#6aKalamaF#WaJaJ#yQtQtQtQtQt",
"QtQtQtQtQtQtQt.qaLaIahavaM#WaJ#W#DaN#RaealaOan#NaNaPaQQtQtQtQtQt",
"QtQtQtQtQtQt.jaRaSaTaUavaB#WaNaPaLaVaWaeaX#6aYaZa0a1a2QtQtQtQtQt",
"QtQtQtQtQt.ba3a4a5a5aVa6a1aZa7aSaSa5a8a9a4a5b.b#a5a5.kQtQtQtQtQt",
"QtQtQtQtQtbaa7a7aVa0b.b#a7b#a0a7a7a7aSaSa7b.aVa0aVaR.#QtQtQtQtQt",
"QtQtQtQtQtbbbcbdbebebfbgbhbhbibjbjbkbkblbmbmbnbobpbq.bQtQtQtQtQt"};


    /* XPM */
    static const char* const image6_data[] = { 
"22 22 165 2",
"Qt c None",
".h c #000000",
".o c #010101",
"aF c #030303",
"#n c #060606",
".H c #080808",
".r c #0c0c0c",
".q c #121212",
"#V c #124e7f",
"#m c #131313",
".G c #161615",
"aI c #172cac",
".6 c #181818",
"aH c #1841b2",
".p c #191919",
"#8 c #1928ba",
"#W c #1929ba",
"aj c #192aba",
"av c #1a31c2",
"aE c #1b1b1b",
"aD c #1b2bc8",
"at c #1c79d2",
"ah c #1c7dd4",
"aA c #1d1d1d",
"aC c #1d7ad7",
"#6 c #1d7eda",
".5 c #1e1e1e",
"#7 c #1e8ae0",
"ai c #1e8de0",
"au c #1e90e0",
".g c #242424",
"#5 c #313b6c",
"aB c #343d8d",
"#3 c #393939",
".f c #3d3d3d",
"ak c #433967",
"#C c #434442",
"aw c #443c6e",
"#l c #454643",
"as c #454fa3",
".4 c #474845",
"#R c #474846",
".e c #484848",
"aG c #4856a0",
".d c #4a4a4a",
"#9 c #4c416a",
".c c #4c4c4c",
"ag c #4c5cae",
"#X c #4d4669",
"#z c #4dc2b2",
"#P c #4e445a",
"#G c #53504e",
".l c #545454",
".b c #555555",
"#Q c #595274",
"#i c #62b2a2",
".a c #676767",
"#j c #69b6a3",
".F c #6f6f6a",
".K c #6f8b89",
"ax c #747474",
"#a c #76a1a0",
".# c #797979",
"#A c #7bd7e8",
"ay c #7d7d7d",
"#U c #7e7d73",
".I c #808080",
".O c #81a3b8",
"az c #828282",
"#y c #82d1c0",
"#S c #848484",
"#O c #857e7c",
"#F c #86add2",
"#k c #86cdda",
"#N c #89b1bd",
"#h c #8acec3",
"#o c #8c8c8c",
"#L c #8cbbca",
"al c #8d8d8d",
".s c #8f8f8f",
"#H c #909090",
"#K c #90bac9",
"#M c #91c4cf",
"#t c #929292",
".X c #94c2cf",
".N c #94c2d0",
".W c #959595",
"#B c #96b9cb",
".3 c #97bede",
".L c #98c2ce",
".P c #9b9b9b",
"a. c #9c9c9c",
"am c #9d9d9d",
"#s c #9dbdc4",
"#b c #9e9e9e",
"#Y c #a0a0a0",
"an c #a6a6a6",
"#v c #a6d1d6",
".Z c #a7a1a1",
"#I c #a7a7a7",
"#D c #a7edde",
".M c #a8d8e5",
"#u c #aeaeae",
"ac c #b1b1b1",
"a# c #b2b2b2",
".2 c #b5cbd6",
".V c #b6b6b6",
"ar c #b7b7b7",
"#Z c #b8b8b8",
"#2 c #bababa",
".Q c #babbb9",
"aq c #bbbbbb",
"#c c #bcbcbc",
".8 c #bfbfbf",
"ap c #c0c0c0",
".1 c #c1d9d2",
"aa c #c8c8c8",
"ab c #cacaca",
"ao c #cbcbcb",
".Y c #ccf8f1",
"#J c #cdcdcd",
".R c #cecece",
"#p c #d1f9f4",
"#4 c #d5d5d5",
"#w c #d5ece4",
".9 c #d5f6f5",
"#0 c #d6d6d6",
".U c #d7d7d7",
"af c #d8d8d8",
".x c #dadada",
".y c #dbdbdb",
".w c #dcdcdc",
"#e c #dcf7f4",
"#1 c #dddddd",
"ae c #dedede",
".E c #dfdfdf",
".z c #e0e0e0",
"#g c #e0ebe4",
"#q c #e1edea",
"#d c #e2e2e2",
"#x c #e2ebe2",
".0 c #e2eee5",
".v c #e3e3e3",
"## c #e3e7d5",
"#r c #e4ebd9",
"#E c #e4f2ec",
".u c #e5e5e5",
".S c #e7e7e7",
".k c #e9e9e9",
".A c #ebebeb",
".D c #ededed",
".t c #f0f0f0",
"#T c #f4f4f4",
".n c #f6f6f6",
".C c #f7f7f7",
"#f c #f8f5f2",
".m c #f8f8f8",
".7 c #f9f9f9",
"ad c #fafafa",
"#. c #fbf0eb",
".J c #fbfbfb",
".T c #fcfcfc",
".B c #fdfdfd",
".j c #fefefe",
".i c #ffffff",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQt.#.a.b.c.d.d.e.f.g.hQtQtQtQtQtQtQt",
"QtQtQtQt.#.i.i.i.i.i.i.i.i.i.h.hQtQtQtQtQtQt",
"QtQtQtQt.a.j.j.j.j.j.j.i.i.i.h.k.hQtQtQtQtQt",
"QtQtQtQt.l.m.n.o.p.q.r.s.j.i.h.t.u.hQtQtQtQt",
"QtQtQtQt.e.v.w.x.y.z.A.n.B.B.h.C.D.E.hQtQtQt",
"QtQtQt.h.h.h.h.h.F.G.H.I.n.J.h.h.h.h.h.hQtQt",
"QtQt.h.K.L.M.N.O.h.P.Q.R.S.n.T.j.U.V.W.hQtQt",
"Qt.h.X.Y.Z.0.1.2.3.h.4.5.6.q.r.s.7.v.8.hQtQt",
"Qt.h.9#..###.F.F.F#a.h#b#c#d.m.j.7.v#c.hQtQt",
"Qt.h#e#f.a#g#h#i#j#k.h#l#m.r#n#o.7.v#c.hQtQt",
"Qt.h#p#q.a#r.F.F.F#s.h#t#u.x.n.j.7.v#c.hQtQt",
"Qt.h#v#w.##x#y#z#A#B.h#C#m#m.q#o.7.v#c.hQtQt",
"QtQt.h#D.Z#E.F.F#F.h#G#H#I#J.A.7.m.v#c.hQtQt",
"QtQtQt.h#K#L#M#N.h#O#P#Q#R#m.q#S#T#d#c.hQtQt",
"QtQtQtQt.h.h.h.h.Z#U#V#W#X#Y#Z#0.S#1#2.hQtQt",
"QtQtQtQt#3.t.v.x#4#5#6#7#8#9a.a#aaabac.hQtQt",
"QtQtQtQt.6ad.kae.yafagahaiajakalamana..oQtQt",
"QtQtQtQt.haeaoapaqaqarasatauavawaxayaz.oQtQt",
"QtQtQtQtQt.h.h.h.h.haA.oaBaCaiaD.HaEaFQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtaGaHaIQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};


    switch (id) {
        case image0_ID: return QPixmap((const char**)image0_data);
        case image1_ID: return QPixmap((const char**)image1_data);
        case image2_ID: return QPixmap((const char**)image2_data);
        case image3_ID: return QPixmap((const char**)image3_data);
        case image4_ID: return QPixmap((const char**)image4_data);
        case image5_ID: return QPixmap((const char**)image5_data);
        case image6_ID: return QPixmap((const char**)image6_data);
        default: return QPixmap();
    } // switch
    } // icon

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
