#ifndef WENDU_H
#define WENDU_H

#include <QWidget>

namespace Ui {
    class Wendu;
}

class Wendu : public QWidget {
    Q_OBJECT
public:
    Wendu(QWidget *parent = 0);
    ~Wendu();
    float w[6];
    int y[6];
    void shuju();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Wendu *ui;
    void paintEvent(QPaintEvent *event);

private slots:
    void on_backButton_clicked();
};

#endif // WENDU_H
