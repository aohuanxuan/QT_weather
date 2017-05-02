/********************************************************************************
** Form generated from reading UI file 'denglu.ui'
**
** Created: Sat Jun 22 14:27:12 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENGLU_H
#define UI_DENGLU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Denglu
{
public:
    QLabel *imglabel;
    QPushButton *inButton;
    QPushButton *outButton;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLineEdit *pwd;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QComboBox *shiBox;
    QComboBox *fenBox;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *giflabel;

    void setupUi(QWidget *Denglu)
    {
        if (Denglu->objectName().isEmpty())
            Denglu->setObjectName(QString::fromUtf8("Denglu"));
        Denglu->resize(320, 240);
        imglabel = new QLabel(Denglu);
        imglabel->setObjectName(QString::fromUtf8("imglabel"));
        imglabel->setGeometry(QRect(-1, 0, 481, 270));
        imglabel->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/tiankong.jpg);"));
        inButton = new QPushButton(Denglu);
        inButton->setObjectName(QString::fromUtf8("inButton"));
        inButton->setGeometry(QRect(210, 160, 93, 27));
        outButton = new QPushButton(Denglu);
        outButton->setObjectName(QString::fromUtf8("outButton"));
        outButton->setGeometry(QRect(210, 200, 93, 27));
        pushButton_1 = new QPushButton(Denglu);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 160, 30, 30));
        pushButton_2 = new QPushButton(Denglu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 160, 30, 30));
        pushButton_3 = new QPushButton(Denglu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 160, 30, 30));
        pushButton_4 = new QPushButton(Denglu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 160, 30, 30));
        pushButton_5 = new QPushButton(Denglu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 160, 30, 30));
        pushButton_6 = new QPushButton(Denglu);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 200, 30, 30));
        pushButton_7 = new QPushButton(Denglu);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 200, 30, 30));
        pushButton_8 = new QPushButton(Denglu);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 200, 30, 30));
        pushButton_9 = new QPushButton(Denglu);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(120, 200, 30, 30));
        pushButton_10 = new QPushButton(Denglu);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(160, 200, 30, 30));
        pwd = new QLineEdit(Denglu);
        pwd->setObjectName(QString::fromUtf8("pwd"));
        pwd->setGeometry(QRect(90, 100, 113, 27));
        pwd->setEchoMode(QLineEdit::Password);
        label = new QLabel(Denglu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 100, 91, 31));
        label_2 = new QLabel(Denglu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 261, 21));
        pushButton = new QPushButton(Denglu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 100, 51, 28));
        label_3 = new QLabel(Denglu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 480, 50));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/xiaotiankong.jpg);"));
        shiBox = new QComboBox(Denglu);
        shiBox->setObjectName(QString::fromUtf8("shiBox"));
        shiBox->setGeometry(QRect(90, 68, 60, 25));
        fenBox = new QComboBox(Denglu);
        fenBox->setObjectName(QString::fromUtf8("fenBox"));
        fenBox->setGeometry(QRect(200, 68, 60, 25));
        label_4 = new QLabel(Denglu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 81, 21));
        label_5 = new QLabel(Denglu);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 60, 41, 41));
        label_6 = new QLabel(Denglu);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(280, 70, 41, 21));
        giflabel = new QLabel(Denglu);
        giflabel->setObjectName(QString::fromUtf8("giflabel"));
        giflabel->setGeometry(QRect(0, 0, 320, 240));

        retranslateUi(Denglu);

        QMetaObject::connectSlotsByName(Denglu);
    } // setupUi

    void retranslateUi(QWidget *Denglu)
    {
        Denglu->setWindowTitle(QApplication::translate("Denglu", "Denglu", 0, QApplication::UnicodeUTF8));
        imglabel->setText(QString());
        inButton->setText(QApplication::translate("Denglu", "\350\277\233\345\205\245", 0, QApplication::UnicodeUTF8));
        outButton->setText(QApplication::translate("Denglu", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("Denglu", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Denglu", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Denglu", "3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Denglu", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Denglu", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Denglu", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Denglu", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Denglu", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("Denglu", "9", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("Denglu", "0", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Denglu", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Denglu", "\345\257\271\344\270\215\350\265\267\357\274\214\345\257\206\347\240\201\350\276\223\345\205\245\351\224\231\350\257\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Denglu", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        shiBox->clear();
        shiBox->insertItems(0, QStringList()
         << QApplication::translate("Denglu", "00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "07", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "23", 0, QApplication::UnicodeUTF8)
        );
        fenBox->clear();
        fenBox->insertItems(0, QStringList()
         << QApplication::translate("Denglu", "00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "07", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "27", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "28", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "29", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "31", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "33", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "34", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "35", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "36", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "37", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "38", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "39", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "41", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "42", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "43", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "44", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "45", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "46", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "47", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "48", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "49", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "51", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "52", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "53", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "54", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "55", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "56", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "57", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "58", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Denglu", "59", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Denglu", "\350\257\267\350\256\276\347\275\256\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Denglu", "\346\227\266", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Denglu", "\345\210\206", 0, QApplication::UnicodeUTF8));
        giflabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Denglu: public Ui_Denglu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENGLU_H
