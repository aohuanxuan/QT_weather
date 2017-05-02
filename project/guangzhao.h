#ifndef GUANGZHAO_H
#define GUANGZHAO_H

#include <QWidget>

namespace Ui {
    class Guangzhao;
}

class Guangzhao : public QWidget {
    Q_OBJECT
public:
    Guangzhao(QWidget *parent = 0);
    ~Guangzhao();
    float w[6];
    int y[6];
    void shuju();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Guangzhao *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_clicked();
};

#endif // GUANGZHAO_H
