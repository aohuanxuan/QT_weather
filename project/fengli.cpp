#include "fengli.h"
#include "ui_fengli.h"
#include <QSqlQuery>
#include <QPainter>

Fengli::Fengli(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Fengli)
{
    ui->setupUi(this);
    shuju();
}

Fengli::~Fengli()
{
    delete ui;
}

void Fengli::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Fengli::shuju()   //读取数据
{
    int i=0;
    QSqlQuery query;
    query.exec("select * from shuju");

    while(query.next())
    {
        w[i]=query.value(3).toFloat();
        y[i]=180-5*w[i];
        i++;
    }
}

void Fengli::paintEvent(QPaintEvent *event)
{

    int X=50,Y=15,s=1,l=0,x0=0,
        &w0=y[0],
        &w1=y[1],
        &w2=y[2],
        &w3=y[3],
        &w4=y[4],
        &w5=y[5];

    QPainter painter(this);
    painter.translate(30,25);
    QPen pen(Qt::black,1);
    QPen pen1(Qt::red,1);
    QPen pen2(Qt::red,1,Qt::DotLine);
    QPen pen3(Qt::black,1,Qt::DotLine);
    painter.setPen(pen);

    //xy轴
    QPointF xy[3]={
    QPointF(0,0),
    QPointF(0,180),
    QPointF(270,180)
    };
   painter.drawPolyline(xy,3);

   //x轴箭头
   QPointF y[3]={
   QPointF(-5,5),
   QPointF(0,0),
   QPointF(5,5)
    };
   painter.drawPolyline(y,3);

   //y轴箭头
   QPointF x[3]={
   QPointF(265,175),
   QPointF(270,180),
   QPointF(265,185)
    };
   painter.drawPolyline(x,3);

   //风力曲线
   QPointF fengli[6]={
   QPointF(0,w0),
   QPointF(50,w1),
   QPointF(100,w2),
   QPointF(150,w3),
   QPointF(200,w4),
   QPointF(250,w5)
    };
      painter.drawPolyline(fengli,6);

      //虚线部分
   while(X<=250)
   {
       painter.setPen(pen2);
       painter.drawLine(X,this->y[s],0,this->y[s]);
       painter.setPen(pen3);
       painter.drawLine(X,185,X,15);
       X=X+50;
       s++;
   }

   while(Y<=140)
   {
        painter.drawLine(-5,Y,250,Y);
        Y=Y+40;
   }

   //数字标号部分
   painter.setPen(pen1);
   for(l=0;l<6;l++)
   {
       painter.drawText(x0,this->y[l],QString::number(this->w[l]));
       x0=x0+50;
   }

}

void Fengli::on_pushButton_clicked()
{
    close();
}
