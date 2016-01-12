/********************************************************************************
** Form generated from reading UI file 'drumgridabout.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRUMGRIDABOUT_H
#define UI_DRUMGRIDABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutClass
{
public:
    QVBoxLayout *vboxLayout;
    QTextBrowser *AboutTextView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutClass)
    {
        if (AboutClass->objectName().isEmpty())
            AboutClass->setObjectName(QStringLiteral("AboutClass"));
        AboutClass->resize(487, 334);
        vboxLayout = new QVBoxLayout(AboutClass);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        AboutTextView = new QTextBrowser(AboutClass);
        AboutTextView->setObjectName(QStringLiteral("AboutTextView"));
        AboutTextView->setUndoRedoEnabled(false);
        AboutTextView->setReadOnly(true);
        AboutTextView->setOpenExternalLinks(true);

        vboxLayout->addWidget(AboutTextView);

        buttonBox = new QDialogButtonBox(AboutClass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AboutClass);
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutClass);
    } // setupUi

    void retranslateUi(QDialog *AboutClass)
    {
        AboutClass->setWindowTitle(QApplication::translate("AboutClass", "About", 0));
        AboutTextView->setHtml(QApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">Drumstick Drum Grid %VERSION%</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sample application for the <a href=\"http://drumstick.sourceforge.net\"><span style=\" font-family:'DejaVu Sans'; text-decoration: underline; color:#0057ae;\">Drumstick MIDI "
                        "Sequencer C++ library</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright \302\251 2006-2015, Pedro Lopez-Cabanillas &lt;<a href=\"mailto:plcl@users.sf.net\"><span style=\" font-family:'DejaVu Sans'; text-decoration: underline; color:#0057ae;\">plcl@users.sf.net</span></a>&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This program is free software; you can redistribute it and/or modify  it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">You should have received a copy of the GNU General Public License along  with this program; if not, write to the Free Software Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA. </span></p></body></ht"
                        "ml>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutClass: public Ui_AboutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRUMGRIDABOUT_H
