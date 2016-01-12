/********************************************************************************
** Form generated from reading UI file 'connections.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONS_H
#define UI_CONNECTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ConnectionsClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label_in;
    QComboBox *m_inputBackends;
    QComboBox *m_inputPorts;
    QCheckBox *m_thru;
    QLabel *label_out;
    QComboBox *m_outputBackends;
    QToolButton *btnOutputDriverCfg;
    QComboBox *m_outputPorts;
    QCheckBox *m_advanced;
    QDialogButtonBox *buttonBox;
    QToolButton *btnInputDriverCfg;

    void setupUi(QDialog *ConnectionsClass)
    {
        if (ConnectionsClass->objectName().isEmpty())
            ConnectionsClass->setObjectName(QStringLiteral("ConnectionsClass"));
        ConnectionsClass->resize(289, 244);
        gridLayout = new QGridLayout(ConnectionsClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_in = new QLabel(ConnectionsClass);
        label_in->setObjectName(QStringLiteral("label_in"));

        gridLayout->addWidget(label_in, 0, 0, 1, 1);

        m_inputBackends = new QComboBox(ConnectionsClass);
        m_inputBackends->setObjectName(QStringLiteral("m_inputBackends"));

        gridLayout->addWidget(m_inputBackends, 1, 0, 1, 1);

        m_inputPorts = new QComboBox(ConnectionsClass);
        m_inputPorts->setObjectName(QStringLiteral("m_inputPorts"));

        gridLayout->addWidget(m_inputPorts, 2, 0, 1, 2);

        m_thru = new QCheckBox(ConnectionsClass);
        m_thru->setObjectName(QStringLiteral("m_thru"));

        gridLayout->addWidget(m_thru, 3, 0, 1, 2);

        label_out = new QLabel(ConnectionsClass);
        label_out->setObjectName(QStringLiteral("label_out"));

        gridLayout->addWidget(label_out, 4, 0, 1, 1);

        m_outputBackends = new QComboBox(ConnectionsClass);
        m_outputBackends->setObjectName(QStringLiteral("m_outputBackends"));

        gridLayout->addWidget(m_outputBackends, 5, 0, 1, 1);

        btnOutputDriverCfg = new QToolButton(ConnectionsClass);
        btnOutputDriverCfg->setObjectName(QStringLiteral("btnOutputDriverCfg"));
        btnOutputDriverCfg->setEnabled(false);

        gridLayout->addWidget(btnOutputDriverCfg, 5, 1, 1, 1);

        m_outputPorts = new QComboBox(ConnectionsClass);
        m_outputPorts->setObjectName(QStringLiteral("m_outputPorts"));

        gridLayout->addWidget(m_outputPorts, 6, 0, 1, 2);

        m_advanced = new QCheckBox(ConnectionsClass);
        m_advanced->setObjectName(QStringLiteral("m_advanced"));

        gridLayout->addWidget(m_advanced, 7, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ConnectionsClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 2);

        btnInputDriverCfg = new QToolButton(ConnectionsClass);
        btnInputDriverCfg->setObjectName(QStringLiteral("btnInputDriverCfg"));
        btnInputDriverCfg->setEnabled(false);

        gridLayout->addWidget(btnInputDriverCfg, 1, 1, 1, 1);


        retranslateUi(ConnectionsClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConnectionsClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConnectionsClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConnectionsClass);
    } // setupUi

    void retranslateUi(QDialog *ConnectionsClass)
    {
        ConnectionsClass->setWindowTitle(QApplication::translate("ConnectionsClass", "Connections", 0));
        label_in->setText(QApplication::translate("ConnectionsClass", "MIDI IN", 0));
        m_thru->setText(QApplication::translate("ConnectionsClass", "Enable MIDI THRU", 0));
        label_out->setText(QApplication::translate("ConnectionsClass", "MIDI OUT", 0));
        btnOutputDriverCfg->setText(QApplication::translate("ConnectionsClass", "...", 0));
        m_advanced->setText(QApplication::translate("ConnectionsClass", "Show advanced connections", 0));
        btnInputDriverCfg->setText(QApplication::translate("ConnectionsClass", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class ConnectionsClass: public Ui_ConnectionsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONS_H
