/********************************************************************************
** Form generated from reading UI file 'fluidsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLUIDSETTINGSDIALOG_H
#define UI_FLUIDSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_FluidSettingsDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLineEdit *periodSize;
    QLineEdit *soundFont;
    QLineEdit *sampleRate;
    QLabel *lblSampleRate;
    QLabel *lblPeriodSize;
    QLineEdit *polyphony;
    QLabel *lblPeriods;
    QComboBox *audioDriver;
    QLabel *lblDriver;
    QLabel *lblPolyphony;
    QLineEdit *periods;
    QLabel *lblSoundFont;
    QLabel *lblGain;
    QLineEdit *gain;
    QToolButton *btnFile;
    QCheckBox *chorus;
    QCheckBox *reverb;

    void setupUi(QDialog *FluidSettingsDialog)
    {
        if (FluidSettingsDialog->objectName().isEmpty())
            FluidSettingsDialog->setObjectName(QStringLiteral("FluidSettingsDialog"));
        FluidSettingsDialog->resize(316, 312);
        gridLayout = new QGridLayout(FluidSettingsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(FluidSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        frame = new QFrame(FluidSettingsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        periodSize = new QLineEdit(frame);
        periodSize->setObjectName(QStringLiteral("periodSize"));

        gridLayout_2->addWidget(periodSize, 1, 1, 1, 1);

        soundFont = new QLineEdit(frame);
        soundFont->setObjectName(QStringLiteral("soundFont"));

        gridLayout_2->addWidget(soundFont, 8, 1, 1, 1);

        sampleRate = new QLineEdit(frame);
        sampleRate->setObjectName(QStringLiteral("sampleRate"));

        gridLayout_2->addWidget(sampleRate, 3, 1, 1, 1);

        lblSampleRate = new QLabel(frame);
        lblSampleRate->setObjectName(QStringLiteral("lblSampleRate"));

        gridLayout_2->addWidget(lblSampleRate, 3, 0, 1, 1);

        lblPeriodSize = new QLabel(frame);
        lblPeriodSize->setObjectName(QStringLiteral("lblPeriodSize"));

        gridLayout_2->addWidget(lblPeriodSize, 1, 0, 1, 1);

        polyphony = new QLineEdit(frame);
        polyphony->setObjectName(QStringLiteral("polyphony"));

        gridLayout_2->addWidget(polyphony, 7, 1, 1, 1);

        lblPeriods = new QLabel(frame);
        lblPeriods->setObjectName(QStringLiteral("lblPeriods"));

        gridLayout_2->addWidget(lblPeriods, 2, 0, 1, 1);

        audioDriver = new QComboBox(frame);
        audioDriver->setObjectName(QStringLiteral("audioDriver"));

        gridLayout_2->addWidget(audioDriver, 0, 1, 1, 1);

        lblDriver = new QLabel(frame);
        lblDriver->setObjectName(QStringLiteral("lblDriver"));

        gridLayout_2->addWidget(lblDriver, 0, 0, 1, 1);

        lblPolyphony = new QLabel(frame);
        lblPolyphony->setObjectName(QStringLiteral("lblPolyphony"));

        gridLayout_2->addWidget(lblPolyphony, 7, 0, 1, 1);

        periods = new QLineEdit(frame);
        periods->setObjectName(QStringLiteral("periods"));

        gridLayout_2->addWidget(periods, 2, 1, 1, 1);

        lblSoundFont = new QLabel(frame);
        lblSoundFont->setObjectName(QStringLiteral("lblSoundFont"));

        gridLayout_2->addWidget(lblSoundFont, 8, 0, 1, 1);

        lblGain = new QLabel(frame);
        lblGain->setObjectName(QStringLiteral("lblGain"));

        gridLayout_2->addWidget(lblGain, 6, 0, 1, 1);

        gain = new QLineEdit(frame);
        gain->setObjectName(QStringLiteral("gain"));

        gridLayout_2->addWidget(gain, 6, 1, 1, 1);

        btnFile = new QToolButton(frame);
        btnFile->setObjectName(QStringLiteral("btnFile"));

        gridLayout_2->addWidget(btnFile, 8, 2, 1, 1);

        chorus = new QCheckBox(frame);
        chorus->setObjectName(QStringLiteral("chorus"));

        gridLayout_2->addWidget(chorus, 4, 0, 1, 2);

        reverb = new QCheckBox(frame);
        reverb->setObjectName(QStringLiteral("reverb"));

        gridLayout_2->addWidget(reverb, 5, 0, 1, 2);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        lblSampleRate->setBuddy(sampleRate);
        lblPeriodSize->setBuddy(periodSize);
        lblPeriods->setBuddy(periods);
        lblPolyphony->setBuddy(polyphony);
        lblSoundFont->setBuddy(soundFont);
        lblGain->setBuddy(gain);
#endif // QT_NO_SHORTCUT

        retranslateUi(FluidSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FluidSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FluidSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FluidSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *FluidSettingsDialog)
    {
        FluidSettingsDialog->setWindowTitle(QApplication::translate("FluidSettingsDialog", "FluidSynth Driver Settings", 0));
        lblSampleRate->setText(QApplication::translate("FluidSettingsDialog", "Sample Rate:", 0));
        lblPeriodSize->setText(QApplication::translate("FluidSettingsDialog", "Period Size:", 0));
        lblPeriods->setText(QApplication::translate("FluidSettingsDialog", "# of Periods:", 0));
        lblDriver->setText(QApplication::translate("FluidSettingsDialog", "Audio Driver:", 0));
        lblPolyphony->setText(QApplication::translate("FluidSettingsDialog", "Polyphony:", 0));
        lblSoundFont->setText(QApplication::translate("FluidSettingsDialog", "Sound Font:", 0));
        lblGain->setText(QApplication::translate("FluidSettingsDialog", "Gain:", 0));
        btnFile->setText(QApplication::translate("FluidSettingsDialog", "...", 0));
        chorus->setText(QApplication::translate("FluidSettingsDialog", "Chorus", 0));
        reverb->setText(QApplication::translate("FluidSettingsDialog", "Reverb", 0));
    } // retranslateUi

};

namespace Ui {
    class FluidSettingsDialog: public Ui_FluidSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLUIDSETTINGSDIALOG_H
