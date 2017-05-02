#include "wendu.h"
#include "ui_wendu.h"
#include <QSqlQuery>
#include <QPainter>

Wendu::Wendu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Wendu)
{
    ui->setupUi(this);
    shuju();
}

Wendu::~Wendu()
{
    delete ui;
}

void Wendu::changeEvent(QEvent *e)
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

void Wendu::shuju()   //读取温度数据
{
    int i=0;
    QSqlQuery query;
    query.exec("select * from shuju");

    while(query.next())
    {
        w[i]=query.value(1).toFloat();
        y[i]=180-4*w[i];
        i++;
    }
}

void Wendu::paintEvent(QPaintEvent *event)
{

    int X=50,Y=15,s=1,l=0,x0=0,
        &w0=y[0],
        &w1=y[1],
        &w2=y[2],
        &w3=y[3],
        &w4=y[4],
        &w5=y[5];

    QPainter painter(this);
    painter.translate(30,25);    //原点转换
    //画笔
    QPen pen(Qt::black,1);//黑色，宽度1
    QPen pen1(Qt::red,1);
    QPen pen2(Qt::red,1,Qt::DotLine);//虚线
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

   //温度曲线
   QPointF wendu[6]={
   QPointF(0,w0),
   QPointF(50,w1),
   QPointF(100,w2),
   QPointF(150,w3),
   QPointF(200,w4),
   QPointF(250,w5)
    };
      painter.drawPolyline(wendu,6);

      //虚线部分
   while(X<=250)
   {
       painter.setPen(pen2);
       painter.drawLine(X,this->y[s],0,this->y[s]);
       painter.setPen(pen3);
       painter.drawLine(X,185,X,15);//网格
       X=X+50;
       s++;
   }

   while(Y<=160)
   {
        painter.drawLine(-5,Y,250,Y);//网格
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

void Wendu::on_backButton_clicked()
{
    close();
}
