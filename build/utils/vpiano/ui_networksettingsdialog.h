/********************************************************************************
** Form generated from reading UI file 'networksettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGSDIALOG_H
#define UI_NETWORKSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetworkSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblInterface;
    QComboBox *comboInterface;
    QLabel *lblAddress;
    QLineEdit *txtAddress;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NetworkSettingsDialog)
    {
        if (NetworkSettingsDialog->objectName().isEmpty())
            NetworkSettingsDialog->setObjectName(QStringLiteral("NetworkSettingsDialog"));
        NetworkSettingsDialog->resize(302, 136);
        verticalLayout = new QVBoxLayout(NetworkSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblInterface = new QLabel(NetworkSettingsDialog);
        lblInterface->setObjectName(QStringLiteral("lblInterface"));

        verticalLayout->addWidget(lblInterface);

        comboInterface = new QComboBox(NetworkSettingsDialog);
        comboInterface->setObjectName(QStringLiteral("comboInterface"));

        verticalLayout->addWidget(comboInterface);

        lblAddress = new QLabel(NetworkSettingsDialog);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));

        verticalLayout->addWidget(lblAddress);

        txtAddress = new QLineEdit(NetworkSettingsDialog);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));

        verticalLayout->addWidget(txtAddress);

        buttonBox = new QDialogButtonBox(NetworkSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        lblInterface->setBuddy(comboInterface);
#endif // QT_NO_SHORTCUT

        retranslateUi(NetworkSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NetworkSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NetworkSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NetworkSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *NetworkSettingsDialog)
    {
        NetworkSettingsDialog->setWindowTitle(QApplication::translate("NetworkSettingsDialog", "Network Driver Settings", 0));
        lblInterface->setText(QApplication::translate("NetworkSettingsDialog", "Network Interface:", 0));
        lblAddress->setText(QApplication::translate("NetworkSettingsDialog", "Address", 0));
    } // retranslateUi

};

namespace Ui {
    class NetworkSettingsDialog: public Ui_NetworkSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKSETTINGSDIALOG_H
