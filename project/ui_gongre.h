/********************************************************************************
** Form generated from reading UI file 'gongre.ui'
**
** Created: Sat Jun 22 10:54:58 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GONGRE_H
#define UI_GONGRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gongre
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
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

    void setupUi(QWidget *Gongre)
    {
        if (Gongre->objectName().isEmpty())
            Gongre->setObjectName(QString::fromUtf8("Gongre"));
        Gongre->resize(320, 240);
        pushButton = new QPushButton(Gongre);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 10, 93, 27));
        label = new QLabel(Gongre);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 0, 111, 21));
        label_2 = new QLabel(Gongre);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 91, 31));
        label_3 = new QLabel(Gongre);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(6, 30, 31, 20));
        label_4 = new QLabel(Gongre);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(6, 70, 30, 20));
        label_5 = new QLabel(Gongre);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(6, 110, 30, 20));
        label_6 = new QLabel(Gongre);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(6, 150, 50, 20));
        label_7 = new QLabel(Gongre);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(6, 190, 50, 20));
        label_8 = new QLabel(Gongre);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 215, 30, 20));
        label_9 = new QLabel(Gongre);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 215, 30, 20));
        label_10 = new QLabel(Gongre);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(120, 215, 30, 20));
        label_11 = new QLabel(Gongre);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 215, 30, 20));
        label_12 = new QLabel(Gongre);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(220, 215, 30, 20));
        label_13 = new QLabel(Gongre);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(270, 215, 30, 20));
        label_14 = new QLabel(Gongre);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(287, 215, 31, 21));

        retranslateUi(Gongre);

        QMetaObject::connectSlotsByName(Gongre);
    } // setupUi

    void retranslateUi(QWidget *Gongre)
    {
        Gongre->setWindowTitle(QApplication::translate("Gongre", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Gongre", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Gongre", "\344\276\233\347\203\255\346\214\207\346\225\260\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Gongre", "\344\276\233\347\203\255\346\214\207\346\225\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Gongre", "20", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Gongre", "15", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Gongre", "10", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Gongre", "5", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Gongre", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Gongre", "00", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Gongre", "04", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Gongre", "08", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Gongre", "12", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Gongre", "16", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Gongre", "20", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Gongre", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Gongre: public Ui_Gongre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GONGRE_H
