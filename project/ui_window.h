/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created: Sat Jun 22 14:31:21 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QLCDNumber *fengliNumber;
    QLCDNumber *guangzhaoNumber;
    QLCDNumber *wenduNumber;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *page_2;
    QTableView *tableView;
    QWidget *page_3;
    QPushButton *wenduButton;
    QPushButton *fengliButton;
    QPushButton *guangzhaoButton;
    QWidget *page_4;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *page_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_9;
    QLabel *label_11;
    QPushButton *searchButton;
    QLabel *searchlabel;
    QLabel *label_10;
    QPushButton *outButton;
    QLabel *label;
    QLabel *timelabel;

    void setupUi(QWidget *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(320, 240);
        listWidget = new QListWidget(Window);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 50, 80, 220));
        QFont font;
        font.setFamily(QString::fromUtf8("AR PL UKai CN"));
        font.setPointSize(12);
        listWidget->setFont(font);
        stackedWidget = new QStackedWidget(Window);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(80, 50, 240, 190));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 240, 190));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bitstream Charter"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/image/image/qixiangzhan.jpg);"));
        fengliNumber = new QLCDNumber(page);
        fengliNumber->setObjectName(QString::fromUtf8("fengliNumber"));
        fengliNumber->setGeometry(QRect(10, 80, 64, 23));
        fengliNumber->setProperty("value", QVariant(0));
        fengliNumber->setProperty("intValue", QVariant(0));
        guangzhaoNumber = new QLCDNumber(page);
        guangzhaoNumber->setObjectName(QString::fromUtf8("guangzhaoNumber"));
        guangzhaoNumber->setGeometry(QRect(160, 110, 64, 23));
        guangzhaoNumber->setProperty("value", QVariant(0));
        wenduNumber = new QLCDNumber(page);
        wenduNumber->setObjectName(QString::fromUtf8("wenduNumber"));
        wenduNumber->setGeometry(QRect(10, 140, 64, 23));
        wenduNumber->setProperty("value", QVariant(0));
        wenduNumber->setProperty("intValue", QVariant(0));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 91, 31));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 71, 21));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 60, 61, 31));
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 90, 62, 17));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 240, 190));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        wenduButton = new QPushButton(page_3);
        wenduButton->setObjectName(QString::fromUtf8("wenduButton"));
        wenduButton->setGeometry(QRect(0, 69, 80, 110));
        wenduButton->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/wendu.jpg);"));
        fengliButton = new QPushButton(page_3);
        fengliButton->setObjectName(QString::fromUtf8("fengliButton"));
        fengliButton->setGeometry(QRect(160, 70, 80, 110));
        fengliButton->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/fengli.jpg);"));
        guangzhaoButton = new QPushButton(page_3);
        guangzhaoButton->setObjectName(QString::fromUtf8("guangzhaoButton"));
        guangzhaoButton->setGeometry(QRect(80, 10, 80, 110));
        guangzhaoButton->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/guangzhao.jpg);"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        tableView_2 = new QTableView(page_4);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(50, 30, 140, 91));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 130, 211, 51));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 0, 131, 28));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        comboBox = new QComboBox(page_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 40, 100, 28));
        comboBox_2 = new QComboBox(page_5);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(130, 40, 100, 28));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 10, 80, 30));
        label_11 = new QLabel(page_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(140, 10, 80, 30));
        searchButton = new QPushButton(page_5);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(80, 90, 70, 31));
        searchButton->setStyleSheet(QString::fromUtf8(""));
        searchlabel = new QLabel(page_5);
        searchlabel->setObjectName(QString::fromUtf8("searchlabel"));
        searchlabel->setGeometry(QRect(0, 140, 240, 30));
        searchlabel->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 120, 70, 30));
        label_10->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/chaxuntest.jpg);"));
        stackedWidget->addWidget(page_5);
        outButton = new QPushButton(Window);
        outButton->setObjectName(QString::fromUtf8("outButton"));
        outButton->setGeometry(QRect(0, 210, 80, 30));
        outButton->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/tuichu.png);"));
        label = new QLabel(Window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 50));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image/xiaotiankong.jpg);"));
        timelabel = new QLabel(Window);
        timelabel->setObjectName(QString::fromUtf8("timelabel"));
        timelabel->setGeometry(QRect(10, 170, 91, 31));

        retranslateUi(Window);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QWidget *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Form", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Window", "\345\256\236\346\227\266\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Window", "\346\225\260\346\215\256\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Window", "\345\216\206\345\217\262\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Window", "\344\276\233\347\203\255\346\214\207\346\225\260", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("Window", "\345\216\206\345\217\262\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QString());
        label_4->setText(QApplication::translate("Window", "\351\243\216\345\212\233\357\274\210m/s\357\274\211", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Window", "\346\270\251\345\272\246(\302\260C)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Window", "\345\205\211\347\205\247\345\274\272\345\272\246", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Window", "(kLux)", 0, QApplication::UnicodeUTF8));
        wenduButton->setText(QString());
        fengliButton->setText(QString());
        guangzhaoButton->setText(QString());
        pushButton->setText(QApplication::translate("Window", "\347\202\271\345\207\273\346\237\245\347\234\213\344\276\233\347\203\255\346\233\262\347\272\277", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Window", "\344\276\233\347\203\255\345\217\202\350\200\203\350\241\250", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Window", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "\345\205\211\347\205\247\345\274\272\345\272\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "\351\243\216\345\212\233", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "\344\276\233\347\203\255\346\214\207\346\225\260", 0, QApplication::UnicodeUTF8)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Window", "00:00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "04:00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "08:00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "12:00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "16:00", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Window", "20:00", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("Window", "\350\257\267\351\200\211\346\213\251\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Window", "\350\257\267\351\200\211\346\213\251\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("Window", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        searchlabel->setText(QString());
        label_10->setText(QApplication::translate("Window", "\346\237\245\350\257\242\347\273\223\346\236\234\357\274\232", 0, QApplication::UnicodeUTF8));
        outButton->setText(QString());
        label->setText(QString());
        timelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
