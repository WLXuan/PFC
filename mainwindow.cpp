#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "mypushbutton.h"
#include <QDebug>
#include <QTimer>
#include "chooselevel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Start-Quit退出游戏
    connect(ui->actionQuit,&QAction::triggered,[=](){
        this->close();
    });
    //设置窗口大小
    this->setFixedSize(900,700);
    //设置标题
    this->setWindowTitle("PantaFoodCart");
    //设置图片
    this->setWindowIcon(QIcon(":/images/panda.png"));
    //开始按钮
    MyPushButton *startb=new MyPushButton(":/images/start.png");
    startb->setParent(this);
    startb->move(220,370);

    //创建第二个选择关卡场景
    ChooseLevel *chooselevel;
    chooselevel=new ChooseLevel;
    //监听第二个选择关卡的信号
    connect(chooselevel,&ChooseLevel::chooselevelback,[=](){
        //选择关卡隐藏
        chooselevel->hide();
        //主场景显示
        this->show();
    });

    connect(startb,&MyPushButton::pressed,[=](){
        startb->zoom1();
        startb->zoom2();

        //延时进入第二个场景
        QTimer::singleShot(200,this,[=](){
            //隐藏自身
            this->hide();
            //进入选择关卡
            chooselevel->show();

        });
    });


}


void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/background.png");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);
    //画标题图片
    pix.load(":/images/title.png");
    pix=pix.scaled(pix.width()*3,pix.height()*3);
    painter.drawPixmap(100,200,690,230,pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


