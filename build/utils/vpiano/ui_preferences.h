/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PreferencesClass
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spinVelocity;
    QSpinBox *spinInChan;
    QLabel *lblOutChan;
    QSpinBox *spinBaseOctave;
    QLabel *lblNumKeys;
    QLabel *lblVelocity;
    QLabel *lblInChan;
    QDialogButtonBox *buttonBox;
    QLabel *lblBaseOctave;
    QSpinBox *spinOutChan;
    QSpinBox *spinNumKeys;
    QLabel *lblStartingKey;
    QComboBox *comboNotes;

    void setupUi(QDialog *PreferencesClass)
    {
        if (PreferencesClass->objectName().isEmpty())
            PreferencesClass->setObjectName(QStringLiteral("PreferencesClass"));
        PreferencesClass->resize(270, 213);
        gridLayout = new QGridLayout(PreferencesClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinVelocity = new QSpinBox(PreferencesClass);
        spinVelocity->setObjectName(QStringLiteral("spinVelocity"));
        spinVelocity->setMaximum(127);
        spinVelocity->setValue(100);

        gridLayout->addWidget(spinVelocity, 2, 2, 1, 1);

        spinInChan = new QSpinBox(PreferencesClass);
        spinInChan->setObjectName(QStringLiteral("spinInChan"));
        spinInChan->setMaximum(15);

        gridLayout->addWidget(spinInChan, 0, 2, 1, 1);

        lblOutChan = new QLabel(PreferencesClass);
        lblOutChan->setObjectName(QStringLiteral("lblOutChan"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblOutChan->sizePolicy().hasHeightForWidth());
        lblOutChan->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblOutChan, 1, 0, 1, 2);

        spinBaseOctave = new QSpinBox(PreferencesClass);
        spinBaseOctave->setObjectName(QStringLiteral("spinBaseOctave"));
        spinBaseOctave->setMinimum(0);
        spinBaseOctave->setMaximum(9);

        gridLayout->addWidget(spinBaseOctave, 3, 2, 1, 1);

        lblNumKeys = new QLabel(PreferencesClass);
        lblNumKeys->setObjectName(QStringLiteral("lblNumKeys"));
        sizePolicy.setHeightForWidth(lblNumKeys->sizePolicy().hasHeightForWidth());
        lblNumKeys->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblNumKeys, 4, 0, 1, 2);

        lblVelocity = new QLabel(PreferencesClass);
        lblVelocity->setObjectName(QStringLiteral("lblVelocity"));
        sizePolicy.setHeightForWidth(lblVelocity->sizePolicy().hasHeightForWidth());
        lblVelocity->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblVelocity, 2, 0, 1, 2);

        lblInChan = new QLabel(PreferencesClass);
        lblInChan->setObjectName(QStringLiteral("lblInChan"));
        sizePolicy.setHeightForWidth(lblInChan->sizePolicy().hasHeightForWidth());
        lblInChan->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblInChan, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(PreferencesClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 4);

        lblBaseOctave = new QLabel(PreferencesClass);
        lblBaseOctave->setObjectName(QStringLiteral("lblBaseOctave"));
        sizePolicy.setHeightForWidth(lblBaseOctave->sizePolicy().hasHeightForWidth());
        lblBaseOctave->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblBaseOctave, 3, 0, 1, 2);

        spinOutChan = new QSpinBox(PreferencesClass);
        spinOutChan->setObjectName(QStringLiteral("spinOutChan"));
        spinOutChan->setMaximum(15);

        gridLayout->addWidget(spinOutChan, 1, 2, 1, 1);

        spinNumKeys = new QSpinBox(PreferencesClass);
        spinNumKeys->setObjectName(QStringLiteral("spinNumKeys"));
        spinNumKeys->setMinimum(12);
        spinNumKeys->setMaximum(120);
        spinNumKeys->setValue(88);

        gridLayout->addWidget(spinNumKeys, 4, 2, 1, 1);

        lblStartingKey = new QLabel(PreferencesClass);
        lblStartingKey->setObjectName(QStringLiteral("lblStartingKey"));
        sizePolicy.setHeightForWidth(lblStartingKey->sizePolicy().hasHeightForWidth());
        lblStartingKey->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lblStartingKey, 5, 0, 1, 1);

        comboNotes = new QComboBox(PreferencesClass);
        comboNotes->setObjectName(QStringLiteral("comboNotes"));
        comboNotes->setMaxVisibleItems(12);

        gridLayout->addWidget(comboNotes, 5, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblOutChan->setBuddy(spinOutChan);
        lblNumKeys->setBuddy(spinNumKeys);
        lblVelocity->setBuddy(spinVelocity);
        lblInChan->setBuddy(spinInChan);
        lblBaseOctave->setBuddy(spinBaseOctave);
        lblStartingKey->setBuddy(comboNotes);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(spinInChan, spinOutChan);
        QWidget::setTabOrder(spinOutChan, spinVelocity);
        QWidget::setTabOrder(spinVelocity, spinBaseOctave);
        QWidget::setTabOrder(spinBaseOctave, spinNumKeys);
        QWidget::setTabOrder(spinNumKeys, buttonBox);

        retranslateUi(PreferencesClass);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesClass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesClass, SLOT(reject()));

        comboNotes->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(PreferencesClass);
    } // setupUi

    void retranslateUi(QDialog *PreferencesClass)
    {
        PreferencesClass->setWindowTitle(QApplication::translate("PreferencesClass", "Preferences", 0));
        lblOutChan->setText(QApplication::translate("PreferencesClass", "Output Channel", 0));
        lblNumKeys->setText(QApplication::translate("PreferencesClass", "Number of keys", 0));
        lblVelocity->setText(QApplication::translate("PreferencesClass", "Velocity", 0));
        lblInChan->setText(QApplication::translate("PreferencesClass", "Input Channel", 0));
        lblBaseOctave->setText(QApplication::translate("PreferencesClass", "Base octave", 0));
        lblStartingKey->setText(QApplication::translate("PreferencesClass", "Starting Key", 0));
        comboNotes->clear();
        comboNotes->insertItems(0, QStringList()
         << QApplication::translate("PreferencesClass", "C", 0)
         << QApplication::translate("PreferencesClass", "C#", 0)
         << QApplication::translate("PreferencesClass", "D", 0)
         << QApplication::translate("PreferencesClass", "D#", 0)
         << QApplication::translate("PreferencesClass", "E", 0)
         << QApplication::translate("PreferencesClass", "F", 0)
         << QApplication::translate("PreferencesClass", "F#", 0)
         << QApplication::translate("PreferencesClass", "G", 0)
         << QApplication::translate("PreferencesClass", "G#", 0)
         << QApplication::translate("PreferencesClass", "A", 0)
         << QApplication::translate("PreferencesClass", "A#", 0)
         << QApplication::translate("PreferencesClass", "B", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class PreferencesClass: public Ui_PreferencesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
