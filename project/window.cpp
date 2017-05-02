#include "window.h"
#include "ui_window.h"
#include "dialog.h"
#include "fengli.h"
#include "guangzhao.h"
#include "gongre.h"
#include "denglu.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtGui>
#include <QDebug>
#include <QTimer>
#include <wendu.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <QElapsedTimer>

int flag=0;
int f=0;
int s=0;
int m=0;

Window::Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    ui->searchlabel->hide();
    //显示登陆界面
    Denglu*del=new Denglu(this);
    //获取时间
    connect(del,SIGNAL(timeReturn(int,int)),this,SLOT(gettime(int,int)));
    del->showFullScreen();
    creatSqliteDB();
    creatTable();
    creatTable1();
    SetMyCom1();
    SetMyCom2();
    GPRSinit();
}

Window::~Window()
{
    delete ui;
}

void Window::delay(int s)      //延时函数
{
    QElapsedTimer t;
    t.start();
    while(t.elapsed()<(500*s))
    QCoreApplication::processEvents();
}

void Window::gettime(int shi,int fen)
{
    s=shi;
    f=fen;
    timer = new QTimer(this);
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(myslot()));
}

void Window::changeEvent(QEvent *e)
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

void Window::SetMyCom1()     //初始化串口一（mobus）
{
    MyCom1 = new Posix_QextSerialPort("/dev/ttySAC1",QextSerialBase::Polling);
    MyCom1->open(QIODevice::ReadWrite);
    MyCom1->setBaudRate(BAUD9600);
    MyCom1->setDataBits(DATA_8);
    MyCom1->setParity(PAR_NONE);
    MyCom1->setStopBits(STOP_2);
    MyCom1->setFlowControl(FLOW_OFF);

    QTimer *readTimer = new QTimer();
    readTimer->start(2000);
    MyCom1->setTimeout(50);
    connect(readTimer,SIGNAL(timeout()),this,SLOT(readnum()));

}

void Window::creatSqliteDB()                  //创建并打开数据库
{
    QSqlDatabase DB=QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName("shuju.db");
    DB.open();
}

void Window::creatTable()               //表格形式显示所有数据
{
    Model = new QSqlTableModel(this);
    Model->setTable("shuju");
    Model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    Model->select();
    Model->setHeaderData(0,Qt::Horizontal,QString::fromUtf8("时间（时）"));
    Model->setHeaderData(1,Qt::Horizontal,QString::fromUtf8("温度（°C）"));
    Model->setHeaderData(2,Qt::Horizontal,QString::fromUtf8("光照（kLux）"));
    Model->setHeaderData(3,Qt::Horizontal,QString::fromUtf8("风力（m/s）"));
    QFont font("unifont",24,50,QFont::Normal);
    ui->tableView->setFont(font);
    ui->tableView->setModel(Model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QTableView::NoEditTriggers);
}

void Window::creatTable1()               //表格形式显示所有数据
{
    Model1 = new QSqlTableModel(this);
    Model1->setTable("gongre");
    Model1->setEditStrategy(QSqlTableModel::OnManualSubmit);
    Model1->select();
    Model1->setHeaderData(0,Qt::Horizontal,QString::fromUtf8("时间"));
    Model1->setHeaderData(1,Qt::Horizontal,QString::fromUtf8("指数"));

    ui->tableView_2->setModel(Model1);
    ui->tableView_2->resizeColumnsToContents();
    ui->tableView_2->setEditTriggers(QTableView::NoEditTriggers);
}

void Window::on_outButton_clicked()       //退出
{
    Dialog *dia=new Dialog;
    dia->show();
}

void Window::on_searchButton_clicked()    //查询
{
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    float s=0;
    int i=0;
    int lei,shi;
    //建立类型，单位，时间数组
    QString danwei[4]={QString::fromUtf8("度"),"KLux","m/s",""};
    QString leixing[4]={QString::fromUtf8("温度"),QString::fromUtf8("光照强度"),QString::fromUtf8("风力"),QString::fromUtf8("供热指数")};
    QString shijian[6]={"00:00","04:00","08:00","12:00","16:00","20:00"};
    //判断所选
    lei=ui->comboBox->currentIndex();
    shi=ui->comboBox_2->currentIndex();
    //查询
    QSqlQuery query;
    if(lei==3)
    {
        query.exec("select * from gongre");
        while(query.next())
        {
            i++;
            while(i==shi+1)
            {
               s=query.value(1).toFloat();
               break;
            }
        }
    }
    else
    {
        query.exec("select * from shuju");

        while(query.next())
        {
            i++;
            while(i==shi+1)
            {
               s=query.value(lei+1).toFloat();
               break;
            }
        }
    }
    //显示
    QFont font("unifont",24,50,QFont::Normal);
    ui->searchlabel->setFont(font);
    QString search=shijian[shi]+QString::fromUtf8("时的")+leixing[lei]+QString::fromUtf8("为")+QString::number(s)+danwei[lei];
    ui->searchlabel->setText(search);
    ui->searchlabel->show();
}

void Window::on_wenduButton_clicked()     //打开温度曲线
{
    Wendu* wen = new Wendu;
    wen->showFullScreen();
}

void Window::on_fengliButton_clicked()    //打开风力曲线
{
    Fengli *fen = new Fengli;
    fen->showFullScreen();
}

void Window::on_guangzhaoButton_clicked() //打开光照曲线
{
    Guangzhao*gua = new Guangzhao;
    gua->showFullScreen();
}

void Window::on_pushButton_clicked()      //打开供热曲线
{
    Gongre *gon = new Gongre;
    gon->showFullScreen();
}

void Window::myslot()
{


   //时间换算
   m++;
   if(m == 60)
   {
       m = 0;
       f++;
       if(f == 60)
       {
           f = 0;
           s++;
           if(s == 24)
           {
               s = 0;
           }
       }
   }
   QString shi, fen, miao;
   shi.sprintf("%02d",s);
   fen.sprintf("%02d",f);
   miao.sprintf("%02d",m);
   QString shijian = shi + ":" + fen + ":" + miao;
   ui->timelabel->setText(shijian);   //显示时间
    if(f==0&&m==0&&s%4==0)          //更新数据库
   {
        float a = ui->wenduNumber->value();
        float b = ui->fengliNumber->value();
        float c = ui->guangzhaoNumber->value();
        //float d = a*0.7 + b*0.2 + c*0.1;
        float d = 18-a+b/10-c/10;
        QString w = QString("%1").arg(a);
        QString f = QString("%1").arg(b);
        QString g = QString("%1").arg(c);
        QString r = QString("%1").arg(d);
        QString time[6]={"00:00","04:00","08:00","12:00","16:00","20:00"};
        QString t=time[(s/4)];
        QSqlQuery query;
        t=t.prepend("'").append("'");
        query.exec("update shuju set awendu = "+w+" where aatime = "+t+"");
        query.exec("update shuju set cfengli = "+f+" where aatime = "+t+"");
        query.exec("update shuju set bguangzhao = "+g+" where aatime = "+t+"");
        query.exec("update gongre set zhishu = "+r+" where aatime = "+t+"");
        creatTable();
        creatTable1();
        qDebug()<<r;

    }
}

void Window::readnum()
{
    QString str;
    str.append(QChar(0X08)).append(QChar(0X04)).append(QChar(0X00)).append(QChar(0X04)).append(QChar(0X00)).append(QChar(0X05)).append(QChar(0X71)).append(QChar(0X51));
    MyCom1->write(str.toAscii());
    delay(1);
    int wh,wl,zh,zl,fh,fl;
    float z,w,f;
    QByteArray temp= MyCom1->readAll();
    zh=temp.at(3)&0x000000ff;
    zl=temp.at(4)&0x000000ff;
    fh=temp.at(7)&0x000000ff;
    fl=temp.at(8)&0x000000ff;
    wh=temp.at(11)&0x000000ff;
    wl=temp.at(12)&0x000000ff;
    z=(zh*256+zl);
    z=z/100;
    w=(wh*256+wl);
    w=w/10;
    f=(fh*256+fl);
    f=f/10;
    ui->fengliNumber->display(f);
    ui->guangzhaoNumber->display(z);
    ui->wenduNumber->display(w);
    //qDebug()<<z<<w<<f;
}

void Window::SetMyCom2()     //初始化串口3（GPRS）
{
    MyCom2 = new Posix_QextSerialPort("/dev/ttySAC3",QextSerialBase::Polling);
    MyCom2->open(QIODevice::ReadWrite);
    MyCom2->setBaudRate(BAUD9600);
    MyCom2->setDataBits(DATA_8);
    MyCom2->setParity(PAR_NONE);
    MyCom2->setStopBits(STOP_1);
    MyCom2->setFlowControl(FLOW_OFF);

    QTimer *sendTimer = new QTimer();
    sendTimer->start(1000);
    MyCom2->setTimeout(50);
    connect(sendTimer,SIGNAL(timeout()),this,SLOT(sendnum()));

}

void Window::GPRSinit(void)    //GPRS初始化
{
    const char *temp = "AT+CLPORT=\"TCP\",\"2022\"\r";
    MyCom2->write(temp);
    delay(1);

}

void Window::GPRSstart(void)   //GPRS连接
{
    const char *temp = "AT+CIPSTART=\"TCP\",\"202.118.91.99\",\"4567\"\r";
    qDebug()<<"GPRSstart";
    MyCom2->write(temp);
    delay(1);
}

void Window::GPRSsendnum()    //发送数据
{
    qDebug()<<"send ready";
    const char *temp = "AT+CIPSEND\r";
    MyCom2->write(temp);
    delay(1);
    QByteArray msg;
    float w=ui->wenduNumber->value();
    float f=ui->fengliNumber->value();
    float g=ui->guangzhaoNumber->value();
    QString m="a"+QString::number(w)+"b"+QString::number(f)+"c"+QString::number(g);
    msg=m.toAscii();
    msg=msg.append("\x1A");
    MyCom2->write(msg);
    delay(2);
}

void Window::sendnum()      //读串口对指令进行判断
{
    QByteArray temp= MyCom2->readAll().simplified();
    if(!temp.isEmpty())
    {
        if(flag==0)
        {
            if(temp.contains("CLPORT"))
            {
                if(temp.endsWith("OK"))
                {
                    GPRSstart();
                }

            }
            else if(temp.contains("CONNECT OK"))
            {
                GPRSsendnum();
                flag = 1;
            }

           else if(temp.contains("ERROR"))
           {
                GPRSinit();
           }
           else if(temp.contains("Call Ready"))
           {
                GPRSinit();
           }
       }
        if(flag==1)
        {
            if(temp.contains("SEND OK"))
            {
                delay(10);
                GPRSsendnum();
            }
            else if(temp.contains("CLOSED"))
            {
                flag=0;
                GPRSinit();
            }
        }
        qDebug()<<temp;

    }

}
