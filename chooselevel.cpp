#include "chooselevel.h"
#include <QMenuBar>
#include <QTimer>
#include "mypushbutton.h"
#include <QDebug>
#include <QPainter>

ChooseLevel::ChooseLevel(QWidget *parent) : QMainWindow(parent)
{

    //设置窗口大小
    this->setFixedSize(900,700);
    //设置标题
    this->setWindowTitle("PantaFoodCart");
    //设置图片
    this->setWindowIcon(QIcon(":/images/panda.png"));

    //创建菜单栏
    QMenuBar *bar=menuBar();
    this->setMenuBar(bar);
    QMenu *startmenu=bar->addMenu("Start");
    QAction *quitAction=startmenu->addAction("Quit");
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });
    //返回按钮
    MyPushButton *backb=new MyPushButton(":/images/back.png");
    backb->setParent(this);
    backb->move(740,630);
    connect(backb,&MyPushButton::clicked,[=](){
        //返回主场景
        backb->zoom1();
        backb->zoom2();
        QTimer::singleShot(200,this,[=](){
            emit this->chooselevelback();
        });
    });

    //选择按钮
    MyPushButton *levelicon1=new MyPushButton(":/images/level1.png");
    levelicon1->setParent(this);
    levelicon1->move(70,230);
    connect(levelicon1,&MyPushButton::clicked,[=]()
    {
        this->hide();
        chooselevel1=new Level1;
        chooselevel1->show();
        connect(chooselevel1,&Level1::chooselevelback,[=](){
            chooselevel1->hide();
            this->show();
        });
    });

    MyPushButton *levelicon2=new MyPushButton(":/images/level2.png");
    levelicon2->setParent(this);
    levelicon2->move(320,230);
    connect(levelicon2,&MyPushButton::clicked,[=]()
    {
        this->hide();
        chooselevel2=new Level2;
        chooselevel2->show();
        connect(chooselevel2,&Level2::chooselevelback,[=](){
            chooselevel2->hide();
            this->show();
        });
    });

    MyPushButton *levelicon3=new MyPushButton(":/images/level3.png");
    levelicon3->setParent(this);
    levelicon3->move(570,230);
    connect(levelicon3,&MyPushButton::clicked,[=]()
    {
        this->hide();
        chooselevel3=new Level3;
        chooselevel3->show();
        connect(chooselevel3,&Level3::chooselevelback,[=](){
            chooselevel3->hide();
            this->show();
        });
    });

    MyPushButton *levelicon4=new MyPushButton(":/images/level4.png");
    levelicon4->setParent(this);
    levelicon4->move(190,430);
    connect(levelicon4,&MyPushButton::clicked,[=]()
    {
        this->hide();
        chooselevel4=new Level4;
        chooselevel4->show();
        connect(chooselevel4,&Level4::chooselevelback,[=](){
            chooselevel4->hide();
            this->show();
        });
    });

    MyPushButton *levelicon5=new MyPushButton(":/images/level5.png");
    levelicon5->setParent(this);
    levelicon5->move(450,430);
    connect(levelicon5,&MyPushButton::clicked,[=]()
    {
        this->hide();
        chooselevel5=new Level5;
        chooselevel5->show();
        connect(chooselevel5,&Level5::chooselevelback,[=](){
            chooselevel5->hide();
            this->show();
        });
    });


}

void ChooseLevel::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/background2.png");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);
    //画标题图片
    pix.load(":/images/title.png");
    pix=pix.scaled(pix.width()*3,pix.height()*3);
    painter.drawPixmap(160,20,600,190,pix);
}

