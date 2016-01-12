/********************************************************************************
** Form generated from reading UI file 'guiplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPLAYER_H
#define UI_GUIPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIPlayerClass
{
public:
    QAction *actionOpen;
    QAction *actionQuit;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionMIDISetup;
    QAction *actionShowToolbar;
    QAction *actionShowStatusbar;
    QWidget *MainWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *lblTime;
    QLabel *lbl3;
    QLabel *lblOther;
    QLabel *lbl4;
    QLabel *lblVolume;
    QLabel *lbl5;
    QSpinBox *spinPitch;
    QPushButton *btnVolume;
    QSlider *volumeSlider;
    QProgressBar *progressBar;
    QFormLayout *formLayout;
    QLabel *lbl1;
    QLabel *lblName;
    QSlider *sliderTempo;
    QPushButton *btnTempo;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QToolBar *toolBar;
    QStatusBar *myStatusBar;

    void setupUi(QMainWindow *GUIPlayerClass)
    {
        if (GUIPlayerClass->objectName().isEmpty())
            GUIPlayerClass->setObjectName(QStringLiteral("GUIPlayerClass"));
        GUIPlayerClass->resize(437, 266);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/drumstick.png"), QSize(), QIcon::Normal, QIcon::Off);
        GUIPlayerClass->setWindowIcon(icon);
        actionOpen = new QAction(GUIPlayerClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionQuit = new QAction(GUIPlayerClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionPlay = new QAction(GUIPlayerClass);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon3);
        actionPlay->setAutoRepeat(false);
        actionPause = new QAction(GUIPlayerClass);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionPause->setCheckable(true);
        actionPause->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon4);
        actionPause->setAutoRepeat(false);
        actionStop = new QAction(GUIPlayerClass);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon5);
        actionStop->setAutoRepeat(false);
        actionAbout = new QAction(GUIPlayerClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        actionAboutQt = new QAction(GUIPlayerClass);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/qtlogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon7);
        actionMIDISetup = new QAction(GUIPlayerClass);
        actionMIDISetup->setObjectName(QStringLiteral("actionMIDISetup"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/setup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMIDISetup->setIcon(icon8);
        actionShowToolbar = new QAction(GUIPlayerClass);
        actionShowToolbar->setObjectName(QStringLiteral("actionShowToolbar"));
        actionShowToolbar->setCheckable(true);
        actionShowToolbar->setChecked(true);
        actionShowStatusbar = new QAction(GUIPlayerClass);
        actionShowStatusbar->setObjectName(QStringLiteral("actionShowStatusbar"));
        actionShowStatusbar->setCheckable(true);
        actionShowStatusbar->setChecked(true);
        MainWidget = new QWidget(GUIPlayerClass);
        MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->setAcceptDrops(true);
        MainWidget->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(MainWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame = new QFrame(MainWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(146, 145, 144, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        QBrush brush3(QColor(165, 164, 164, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        frame->setPalette(palette);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblTime = new QLabel(frame);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblTime->sizePolicy().hasHeightForWidth());
        lblTime->setSizePolicy(sizePolicy1);
        lblTime->setMinimumSize(QSize(210, 62));
        lblTime->setBaseSize(QSize(210, 62));
        QFont font;
        font.setPointSize(34);
        lblTime->setFont(font);

        gridLayout->addWidget(lblTime, 0, 0, 3, 1);

        lbl3 = new QLabel(frame);
        lbl3->setObjectName(QStringLiteral("lbl3"));

        gridLayout->addWidget(lbl3, 0, 1, 1, 1);

        lblOther = new QLabel(frame);
        lblOther->setObjectName(QStringLiteral("lblOther"));
        sizePolicy1.setHeightForWidth(lblOther->sizePolicy().hasHeightForWidth());
        lblOther->setSizePolicy(sizePolicy1);
        lblOther->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(lblOther, 0, 2, 1, 1);

        lbl4 = new QLabel(frame);
        lbl4->setObjectName(QStringLiteral("lbl4"));

        gridLayout->addWidget(lbl4, 1, 1, 1, 1);

        lblVolume = new QLabel(frame);
        lblVolume->setObjectName(QStringLiteral("lblVolume"));

        gridLayout->addWidget(lblVolume, 1, 2, 1, 1);

        lbl5 = new QLabel(frame);
        lbl5->setObjectName(QStringLiteral("lbl5"));

        gridLayout->addWidget(lbl5, 2, 1, 1, 1);

        spinPitch = new QSpinBox(frame);
        spinPitch->setObjectName(QStringLiteral("spinPitch"));
        spinPitch->setMaximumSize(QSize(50, 16777215));
        spinPitch->setMinimum(-12);
        spinPitch->setMaximum(12);

        gridLayout->addWidget(spinPitch, 2, 2, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 2, 2);

        btnVolume = new QPushButton(MainWidget);
        btnVolume->setObjectName(QStringLiteral("btnVolume"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/vol.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnVolume->setIcon(icon9);

        gridLayout_2->addWidget(btnVolume, 0, 2, 1, 1);

        volumeSlider = new QSlider(MainWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy2);
        volumeSlider->setMaximum(200);
        volumeSlider->setValue(100);
        volumeSlider->setTracking(false);
        volumeSlider->setOrientation(Qt::Vertical);
        volumeSlider->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(volumeSlider, 1, 2, 4, 1);

        progressBar = new QProgressBar(MainWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(true);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        gridLayout_2->addWidget(progressBar, 2, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        lbl1 = new QLabel(MainWidget);
        lbl1->setObjectName(QStringLiteral("lbl1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lbl1);

        lblName = new QLabel(MainWidget);
        lblName->setObjectName(QStringLiteral("lblName"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblName->sizePolicy().hasHeightForWidth());
        lblName->setSizePolicy(sizePolicy3);
        lblName->setOpenExternalLinks(true);
        lblName->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(0, QFormLayout::FieldRole, lblName);


        gridLayout_2->addLayout(formLayout, 3, 0, 1, 2);

        sliderTempo = new QSlider(MainWidget);
        sliderTempo->setObjectName(QStringLiteral("sliderTempo"));
        sizePolicy.setHeightForWidth(sliderTempo->sizePolicy().hasHeightForWidth());
        sliderTempo->setSizePolicy(sizePolicy);
        sliderTempo->setMinimum(0);
        sliderTempo->setMaximum(200);
        sliderTempo->setSingleStep(1);
        sliderTempo->setPageStep(10);
        sliderTempo->setValue(100);
        sliderTempo->setOrientation(Qt::Horizontal);
        sliderTempo->setTickPosition(QSlider::TicksAbove);
        sliderTempo->setTickInterval(5);

        gridLayout_2->addWidget(sliderTempo, 4, 0, 1, 1);

        btnTempo = new QPushButton(MainWidget);
        btnTempo->setObjectName(QStringLiteral("btnTempo"));
        sizePolicy1.setHeightForWidth(btnTempo->sizePolicy().hasHeightForWidth());
        btnTempo->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(btnTempo, 4, 1, 1, 1);

        GUIPlayerClass->setCentralWidget(MainWidget);
        menuBar = new QMenuBar(GUIPlayerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 437, 24));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        GUIPlayerClass->setMenuBar(menuBar);
        toolBar = new QToolBar(GUIPlayerClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GUIPlayerClass->addToolBar(Qt::BottomToolBarArea, toolBar);
        myStatusBar = new QStatusBar(GUIPlayerClass);
        myStatusBar->setObjectName(QStringLiteral("myStatusBar"));
        GUIPlayerClass->setStatusBar(myStatusBar);
        QWidget::setTabOrder(spinPitch, sliderTempo);
        QWidget::setTabOrder(sliderTempo, btnTempo);
        QWidget::setTabOrder(btnTempo, volumeSlider);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionPlay);
        menuFile->addAction(actionPause);
        menuFile->addAction(actionStop);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menuSettings->addAction(actionShowToolbar);
        menuSettings->addAction(actionShowStatusbar);
        menuSettings->addSeparator();
        menuSettings->addAction(actionMIDISetup);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionMIDISetup);
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);
        toolBar->addAction(actionPause);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionQuit);

        retranslateUi(GUIPlayerClass);
        QObject::connect(actionShowStatusbar, SIGNAL(toggled(bool)), myStatusBar, SLOT(setVisible(bool)));
        QObject::connect(actionShowToolbar, SIGNAL(toggled(bool)), toolBar, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(GUIPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIPlayerClass)
    {
        GUIPlayerClass->setWindowTitle(QApplication::translate("GUIPlayerClass", "Drumstick MIDI Player", 0));
        actionOpen->setText(QApplication::translate("GUIPlayerClass", "Open", 0));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("GUIPlayerClass", "Open a MIDI file", 0));
#endif // QT_NO_STATUSTIP
        actionQuit->setText(QApplication::translate("GUIPlayerClass", "Quit", 0));
#ifndef QT_NO_STATUSTIP
        actionQuit->setStatusTip(QApplication::translate("GUIPlayerClass", "Quit the application", 0));
#endif // QT_NO_STATUSTIP
        actionPlay->setText(QApplication::translate("GUIPlayerClass", "Play", 0));
#ifndef QT_NO_STATUSTIP
        actionPlay->setStatusTip(QApplication::translate("GUIPlayerClass", "Start playing the current MIDI file", 0));
#endif // QT_NO_STATUSTIP
        actionPause->setText(QApplication::translate("GUIPlayerClass", "Pause", 0));
#ifndef QT_NO_STATUSTIP
        actionPause->setStatusTip(QApplication::translate("GUIPlayerClass", "Pause the playback", 0));
#endif // QT_NO_STATUSTIP
        actionStop->setText(QApplication::translate("GUIPlayerClass", "Stop", 0));
#ifndef QT_NO_STATUSTIP
        actionStop->setStatusTip(QApplication::translate("GUIPlayerClass", "Stop the playback", 0));
#endif // QT_NO_STATUSTIP
        actionAbout->setText(QApplication::translate("GUIPlayerClass", "About", 0));
#ifndef QT_NO_STATUSTIP
        actionAbout->setStatusTip(QApplication::translate("GUIPlayerClass", "Show the about box", 0));
#endif // QT_NO_STATUSTIP
        actionAboutQt->setText(QApplication::translate("GUIPlayerClass", "About Qt", 0));
#ifndef QT_NO_STATUSTIP
        actionAboutQt->setStatusTip(QApplication::translate("GUIPlayerClass", "Show the about Qt dialog box", 0));
#endif // QT_NO_STATUSTIP
        actionMIDISetup->setText(QApplication::translate("GUIPlayerClass", "MIDI Setup", 0));
#ifndef QT_NO_STATUSTIP
        actionMIDISetup->setStatusTip(QApplication::translate("GUIPlayerClass", "Select a connection for the MIDI output port", 0));
#endif // QT_NO_STATUSTIP
        actionShowToolbar->setText(QApplication::translate("GUIPlayerClass", "Show Tool Bar", 0));
#ifndef QT_NO_TOOLTIP
        actionShowToolbar->setToolTip(QApplication::translate("GUIPlayerClass", "Show Tool Bar", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionShowToolbar->setStatusTip(QApplication::translate("GUIPlayerClass", "Show or hide the tool bar", 0));
#endif // QT_NO_STATUSTIP
        actionShowStatusbar->setText(QApplication::translate("GUIPlayerClass", "Show Status Bar", 0));
#ifndef QT_NO_STATUSTIP
        actionShowStatusbar->setStatusTip(QApplication::translate("GUIPlayerClass", "Show or hide the status bar", 0));
#endif // QT_NO_STATUSTIP
        MainWidget->setWindowTitle(QApplication::translate("GUIPlayerClass", "Drumstick MIDI Player", 0));
#ifndef QT_NO_STATUSTIP
        frame->setStatusTip(QApplication::translate("GUIPlayerClass", "Playback time and current levels", 0));
#endif // QT_NO_STATUSTIP
        lblTime->setText(QApplication::translate("GUIPlayerClass", "00:00:00", 0));
        lbl3->setText(QApplication::translate("GUIPlayerClass", "Tempo:", 0));
        lbl4->setText(QApplication::translate("GUIPlayerClass", "Volume:", 0));
        lblVolume->setText(QString());
        lbl5->setText(QApplication::translate("GUIPlayerClass", "Pitch:", 0));
#ifndef QT_NO_TOOLTIP
        spinPitch->setToolTip(QApplication::translate("GUIPlayerClass", "Pitch Control", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        spinPitch->setStatusTip(QApplication::translate("GUIPlayerClass", "Pitch transpose between -12 and +12 semitones", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        btnVolume->setToolTip(QApplication::translate("GUIPlayerClass", "Reset Volume", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        btnVolume->setStatusTip(QApplication::translate("GUIPlayerClass", "Reset Volume to 100%", 0));
#endif // QT_NO_STATUSTIP
        btnVolume->setText(QString());
#ifndef QT_NO_STATUSTIP
        volumeSlider->setStatusTip(QApplication::translate("GUIPlayerClass", "Volume Slider", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        progressBar->setStatusTip(QApplication::translate("GUIPlayerClass", "Playback progress", 0));
#endif // QT_NO_STATUSTIP
        lbl1->setText(QApplication::translate("GUIPlayerClass", "File Name:", 0));
#ifndef QT_NO_STATUSTIP
        lblName->setStatusTip(QApplication::translate("GUIPlayerClass", "Currently loaded MIDI file name", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        sliderTempo->setStatusTip(QApplication::translate("GUIPlayerClass", "Tempo Slider", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        btnTempo->setToolTip(QApplication::translate("GUIPlayerClass", "Reset Tempo", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        btnTempo->setStatusTip(QApplication::translate("GUIPlayerClass", "Reset Tempo to 100%", 0));
#endif // QT_NO_STATUSTIP
        btnTempo->setText(QApplication::translate("GUIPlayerClass", "tempo=100%", 0));
        menuFile->setTitle(QApplication::translate("GUIPlayerClass", "File", 0));
        menuHelp->setTitle(QApplication::translate("GUIPlayerClass", "Help", 0));
        menuSettings->setTitle(QApplication::translate("GUIPlayerClass", "Settings", 0));
        toolBar->setWindowTitle(QApplication::translate("GUIPlayerClass", "Tool Bar", 0));
    } // retranslateUi

};

namespace Ui {
    class GUIPlayerClass: public Ui_GUIPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPLAYER_H
