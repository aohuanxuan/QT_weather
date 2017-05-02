/********************************************************************************
** Form generated from reading UI file 'wendu.ui'
**
** Created: Sat Jun 22 10:54:58 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WENDU_H
#define UI_WENDU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wendu
{
public:
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QWidget *Wendu)
    {
        if (Wendu->objectName().isEmpty())
            Wendu->setObjectName(QString::fromUtf8("Wendu"));
        Wendu->resize(320, 240);
        backButton = new QPushButton(Wendu);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(220, 10, 93, 27));
        label = new QLabel(Wendu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(6, 30, 30, 20));
        label_2 = new QLabel(Wendu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 81, 31));
        label_4 = new QLabel(Wendu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 215, 30, 20));
        label_5 = new QLabel(Wendu);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(6, 70, 30, 20));
        label_6 = new QLabel(Wendu);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(6, 110, 30, 20));
        label_7 = new QLabel(Wendu);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(6, 150, 30, 20));
        label_8 = new QLabel(Wendu);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 215, 30, 20));
        label_9 = new QLabel(Wendu);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 215, 30, 20));
        label_10 = new QLabel(Wendu);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 215, 30, 20));
        label_11 = new QLabel(Wendu);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 215, 30, 20));
        label_12 = new QLabel(Wendu);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 215, 30, 20));
        label_13 = new QLabel(Wendu);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(6, 190, 30, 20));
        label_14 = new QLabel(Wendu);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(110, 0, 91, 31));
        label_15 = new QLabel(Wendu);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(287, 215, 31, 21));

        retranslateUi(Wendu);

        QMetaObject::connectSlotsByName(Wendu);
    } // setupUi

    void retranslateUi(QWidget *Wendu)
    {
        Wendu->setWindowTitle(QApplication::translate("Wendu", "Form", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("Wendu", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Wendu", "40", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Wendu", "\346\270\251\345\272\246\357\274\210\345\272\246\357\274\211", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wendu", "20", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Wendu", "30", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Wendu", "20", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Wendu", "10", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Wendu", "16", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Wendu", "12", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Wendu", "08", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Wendu", "04", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Wendu", "00", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Wendu", "0", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Wendu", "\346\270\251\345\272\246\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Wendu", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wendu: public Ui_Wendu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WENDU_H
