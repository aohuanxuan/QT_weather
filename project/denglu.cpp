#include "denglu.h"
#include "ui_denglu.h"
#include "window.h"
#include <QTime>
#include <QMovie>

Denglu::Denglu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Denglu)
{
    ui->setupUi(this);
    //初始化控件
    ui->label_2->hide();
    ui->giflabel->hide();
    ui->giflabel->setFocusPolicy(Qt::NoFocus);
    ui->imglabel->setFocusPolicy(Qt::NoFocus);
    ui->inButton->setFocusPolicy(Qt::NoFocus);
    ui->label->setFocusPolicy(Qt::NoFocus);
    ui->label_2->setFocusPolicy(Qt::NoFocus);
    ui->outButton->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_1->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_10->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_2->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_3->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_4->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_5->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_6->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_7->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_8->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_9->setFocusPolicy(Qt::NoFocus);
    ui->pushButton->setFocusPolicy(Qt::NoFocus);

}

Denglu::~Denglu()
{
    delete ui;
}

void Denglu::changeEvent(QEvent *e)
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

void Denglu::sleep(unsigned int msec)     //延时
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//进入
void Denglu::on_inButton_clicked()
{
    if(PwdStr=="3")
    {
        int shi=ui->shiBox->currentIndex();
        int fen=ui->fenBox->currentIndex();
        QMovie *movie=new QMovie("welcome.gif");
        ui->giflabel->setMovie(movie);
        ui->giflabel->showFullScreen();
        movie->start();
        qApp->processEvents();
        sleep(1000);
        emit timeReturn(shi,fen);
        close();
    }
    else
    {
        ui->label_2->show();
        ui->pwd->clear();
        PwdStr="";
    }

}

//退出
void Denglu::on_outButton_clicked()
{
    close();
}

//密码输入
void Denglu::on_pushButton_1_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="1";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_2_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="2";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_3_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="3";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_4_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="4";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_5_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="5";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_6_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="6";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_7_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="7";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_8_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="8";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_9_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="9";
            ui->pwd->setText(PwdStr);
        }
}

void Denglu::on_pushButton_10_clicked()
{
    if(ui->pwd->hasFocus())
        {
            PwdStr+="0";
            ui->pwd->setText(PwdStr);
        }
}

//密码删除
void Denglu::on_pushButton_clicked()
{
    if(ui->pwd->hasFocus())
       {
           PwdStr.chop(1);
           ui->pwd->setText(PwdStr);
       }
}
