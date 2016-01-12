/********************************************************************************
** Form generated from reading UI file 'drumgrid.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUMGRID_H
#define UI_DRUMGRID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrumGrid
{
public:
    QAction *actionConnect;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *gridColumns;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSlider *tempoSlider;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DrumGrid)
    {
        if (DrumGrid->objectName().isEmpty())
            DrumGrid->setObjectName(QStringLiteral("DrumGrid"));
        DrumGrid->resize(596, 396);
        actionConnect = new QAction(DrumGrid);
        actionConnect->setObjectName(QStringLiteral("actionConnect"));
        actionQuit = new QAction(DrumGrid);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(DrumGrid);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(DrumGrid);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(DrumGrid);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 1, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridColumns = new QSpinBox(frame_2);
        gridColumns->setObjectName(QStringLiteral("gridColumns"));
        gridColumns->setMinimum(2);
        gridColumns->setMaximum(64);
        gridColumns->setValue(16);

        horizontalLayout->addWidget(gridColumns);

        startButton = new QPushButton(frame_2);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout->addWidget(startButton);

        stopButton = new QPushButton(frame_2);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout->addWidget(stopButton);

        tempoSlider = new QSlider(frame_2);
        tempoSlider->setObjectName(QStringLiteral("tempoSlider"));
        tempoSlider->setMinimum(10);
        tempoSlider->setMaximum(250);
        tempoSlider->setValue(100);
        tempoSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(tempoSlider);


        gridLayout->addWidget(frame_2, 1, 0, 1, 2);

        DrumGrid->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DrumGrid);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        DrumGrid->setMenuBar(menuBar);
        statusBar = new QStatusBar(DrumGrid);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DrumGrid->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionConnect);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(DrumGrid);

        QMetaObject::connectSlotsByName(DrumGrid);
    } // setupUi

    void retranslateUi(QMainWindow *DrumGrid)
    {
        DrumGrid->setWindowTitle(QApplication::translate("DrumGrid", "Drumstick Drum Grid", 0));
        actionConnect->setText(QApplication::translate("DrumGrid", "Connect...", 0));
        actionQuit->setText(QApplication::translate("DrumGrid", "Quit", 0));
        actionAbout->setText(QApplication::translate("DrumGrid", "About", 0));
        actionAbout_Qt->setText(QApplication::translate("DrumGrid", "About Qt", 0));
        startButton->setText(QApplication::translate("DrumGrid", "start", 0));
        stopButton->setText(QApplication::translate("DrumGrid", "stop", 0));
        menuFile->setTitle(QApplication::translate("DrumGrid", "File", 0));
        menuHelp->setTitle(QApplication::translate("DrumGrid", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class DrumGrid: public Ui_DrumGrid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUMGRID_H
