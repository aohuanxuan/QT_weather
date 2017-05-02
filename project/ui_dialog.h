/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Mon Jun 17 20:40:08 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *sureButton;
    QPushButton *backButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(250, 100);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 121, 41));
        sureButton = new QPushButton(Dialog);
        sureButton->setObjectName(QString::fromUtf8("sureButton"));
        sureButton->setGeometry(QRect(10, 60, 93, 27));
        backButton = new QPushButton(Dialog);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(150, 60, 93, 27));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\344\275\240\347\241\256\345\256\232\350\246\201\351\200\200\345\207\272\345\220\227", 0, QApplication::UnicodeUTF8));
        sureButton->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
