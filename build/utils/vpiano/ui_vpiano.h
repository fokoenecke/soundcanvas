/********************************************************************************
** Form generated from reading UI file 'vpiano.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VPIANO_H
#define UI_VPIANO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pianokeybd.h"

QT_BEGIN_NAMESPACE

class Ui_VPiano
{
public:
    QAction *actionExit;
    QAction *actionPreferences;
    QAction *actionConnections;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    PianoKeybd *pianokeybd;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VPiano)
    {
        if (VPiano->objectName().isEmpty())
            VPiano->setObjectName(QStringLiteral("VPiano"));
        VPiano->resize(664, 139);
        actionExit = new QAction(VPiano);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPreferences = new QAction(VPiano);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionConnections = new QAction(VPiano);
        actionConnections->setObjectName(QStringLiteral("actionConnections"));
        actionAbout = new QAction(VPiano);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(VPiano);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(VPiano);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        pianokeybd = new PianoKeybd(centralwidget);
        pianokeybd->setObjectName(QStringLiteral("pianokeybd"));

        vboxLayout->addWidget(pianokeybd);

        VPiano->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VPiano);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 664, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        VPiano->setMenuBar(menubar);
        statusBar = new QStatusBar(VPiano);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setSizeGripEnabled(true);
        VPiano->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionConnections);
        menuEdit->addAction(actionPreferences);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(VPiano);

        QMetaObject::connectSlotsByName(VPiano);
    } // setupUi

    void retranslateUi(QMainWindow *VPiano)
    {
        VPiano->setWindowTitle(QApplication::translate("VPiano", "Drumstick Virtual Piano", 0));
        actionExit->setText(QApplication::translate("VPiano", "&Exit", 0));
        actionPreferences->setText(QApplication::translate("VPiano", "&Preferences", 0));
        actionConnections->setText(QApplication::translate("VPiano", "&Connections", 0));
        actionAbout->setText(QApplication::translate("VPiano", "About", 0));
        actionAbout_Qt->setText(QApplication::translate("VPiano", "About Qt", 0));
        menuFile->setTitle(QApplication::translate("VPiano", "File", 0));
        menuEdit->setTitle(QApplication::translate("VPiano", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("VPiano", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class VPiano: public Ui_VPiano {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VPIANO_H
