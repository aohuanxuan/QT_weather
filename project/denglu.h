#ifndef DENGLU_H
#define DENGLU_H

#include <QWidget>

namespace Ui {
    class Denglu;
}

class Denglu : public QWidget {
    Q_OBJECT
public:
    Denglu(QWidget *parent = 0);
    ~Denglu();
    void sleep(unsigned int msec);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Denglu *ui;
    QString PwdStr;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_1_clicked();
    void on_outButton_clicked();
    void on_inButton_clicked();
signals:
    void timeReturn(int,int);
};

#endif // DENGLU_H
