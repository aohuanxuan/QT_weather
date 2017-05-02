/********************************************************************************
** Form generated from reading UI file 'gif.ui'
**
** Created: Fri May 3 15:28:18 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIF_H
#define UI_GIF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gif
{
public:
    QLabel *label;

    void setupUi(QWidget *Gif)
    {
        if (Gif->objectName().isEmpty())
            Gif->setObjectName(QString::fromUtf8("Gif"));
        Gif->resize(480, 270);
        label = new QLabel(Gif);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 270));

        retranslateUi(Gif);

        QMetaObject::connectSlotsByName(Gif);
    } // setupUi

    void retranslateUi(QWidget *Gif)
    {
        Gif->setWindowTitle(QApplication::translate("Gif", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gif: public Ui_Gif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIF_H
