#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QSqlTableModel>
#include "posix_qextserialport.h"

namespace Ui {
    class Window;
}

class Window : public QWidget {
    Q_OBJECT
public:
    Window(QWidget *parent = 0);
    ~Window();
    void creatTable();
    void creatTable1();
    void creatSqliteDB();
    void delay(int i);
    void SetMyCom1();
    void SetMyCom2();
    void GPRSinit(void);
    void GPRSstart(void);
    void GPRSsendnum();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Window *ui;
    QSqlTableModel * Model;
    QSqlTableModel * Model1;
    Posix_QextSerialPort *MyCom1;
    Posix_QextSerialPort *MyCom2;
    QTimer *timer;
    QTimer *readTime;
    QTimer *sendTime;

private slots:
    void on_pushButton_clicked();
    void on_guangzhaoButton_clicked();
    void on_fengliButton_clicked();
    void on_wenduButton_clicked();
    void on_searchButton_clicked();
    void on_outButton_clicked();
    void myslot();
    void gettime(int shi,int fen);
    void readnum();
    void sendnum();

};

#endif // WINDOW_H
