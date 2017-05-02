#ifndef GONGRE_H
#define GONGRE_H

#include <QWidget>

namespace Ui {
    class Gongre;
}

class Gongre : public QWidget {
    Q_OBJECT
public:
    Gongre(QWidget *parent = 0);
    ~Gongre();
    float w[6];
    int y[6];
    void shuju();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Gongre *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_clicked();
};

#endif // GONGRE_H
