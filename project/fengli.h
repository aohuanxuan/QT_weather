#ifndef FENGLI_H
#define FENGLI_H

#include <QWidget>

namespace Ui {
    class Fengli;
}

class Fengli : public QWidget {
    Q_OBJECT
public:
    Fengli(QWidget *parent = 0);
    ~Fengli();
    float w[6];
    int y[6];
    void shuju();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Fengli *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_clicked();
};

#endif // FENGLI_H
