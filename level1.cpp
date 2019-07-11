#include "level1.h"
#include "chooselevel.h"
#include "mypushbutton.h"
#include <QMenuBar>
#include <QPainter>
#include <QTimer>
#include <QLabel>
#include <QDebug>
//快餐店

Level1::Level1(QWidget *parent) : QMainWindow(parent)
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



    //第一个list
    QLabel *list11=new QLabel(this);
    list11->setFixedSize(100,180);
    list11->move(10,50);
    QPixmap *pixmap=new QPixmap(":/images/list11.png");
    pixmap->scaled(list11->size(),Qt::KeepAspectRatio);
    list11->setScaledContents(true);
    list11->setPixmap(*pixmap);

    //第二个list
    QLabel *list12=new QLabel(this);
    list12->setFixedSize(100,180);
    list12->move(140,50);
    QPixmap *pixmap2=new QPixmap(":/images/list12.png");
    pixmap2->scaled(list12->size(),Qt::KeepAspectRatio);
    list12->setScaledContents(true);
    list12->setPixmap(*pixmap2);

    //第三个list
    QLabel *list13=new QLabel(this);
    list13->setFixedSize(100,180);
    list13->move(270,50);
    QPixmap *pixmap3=new QPixmap(":/images/list13.png");
    pixmap3->scaled(list13->size(),Qt::KeepAspectRatio);
    list13->setScaledContents(true);
    list13->setPixmap(*pixmap3);

    //第四个list
    QLabel *list14=new QLabel(this);
    list14->setFixedSize(100,180);
    list14->move(400,50);
    QPixmap *pixmap4=new QPixmap(":/images/list14.png");
    pixmap4->scaled(list14->size(),Qt::KeepAspectRatio);
    list14->setScaledContents(true);
    list14->setPixmap(*pixmap4);

    //第五个list
    QLabel *list15=new QLabel(this);
    list15->setFixedSize(100,180);
    list15->move(530,50);
    QPixmap *pixmap5=new QPixmap(":/images/list15.png");
    pixmap5->scaled(list15->size(),Qt::KeepAspectRatio);
    list15->setScaledContents(true);
    list15->setPixmap(*pixmap5);

    //第六个list
    QLabel *list16=new QLabel(this);
    list16->setFixedSize(100,180);
    list16->move(660,50);
    QPixmap *pixmap6=new QPixmap(":/images/list16.png");
    pixmap6->scaled(list16->size(),Qt::KeepAspectRatio);
    list16->setScaledContents(true);
    list16->setPixmap(*pixmap6);

    //第七个list
    QLabel *list17=new QLabel(this);
    list17->setFixedSize(100,180);
    list17->move(790,50);
    QPixmap *pixmap7=new QPixmap(":/images/list17.png");
    pixmap7->scaled(list17->size(),Qt::KeepAspectRatio);
    list17->setScaledContents(true);
    list17->setPixmap(*pixmap7);




    //薯条按钮
    MyPushButton *fries=new MyPushButton(":/images/friess.png");
    fries->setParent(this);
    fries->move(10,450);

    QLabel *fLabel=new QLabel(this);
    fLabel->setFixedSize(200,200);
    fLabel->move(100,270);

    //汉堡按钮
    MyPushButton *ham=new MyPushButton(":/images/hams.png");
    ham->setParent(this);
    ham->move(200,520);

    QLabel *hLabel=new QLabel(this);
    hLabel->setFixedSize(200,200);
    hLabel->move(230,270);


    //可乐按钮
    MyPushButton *cola=new MyPushButton(":/images/cola.png");
    cola->setParent(this);
    cola->move(720,450);

    QLabel *cLabel=new QLabel(this);
    cLabel->setFixedSize(200,200);
    cLabel->move(620,270);

    //热狗按钮
    MyPushButton *hot=new MyPushButton(":/images/hots.png");
    hot->setParent(this);
    hot->move(400,460);

    QLabel *tLabel=new QLabel(this);
    tLabel->setFixedSize(200,200);
    tLabel->move(360,270);

    //三明治按钮
    MyPushButton *san=new MyPushButton(":/images/sans.png");
    san->setParent(this);
    san->move(580,520);

    QLabel *sLabel=new QLabel(this);
    sLabel->setFixedSize(200,200);
    sLabel->move(490,270);


    //薯条效果
    connect(fries,&MyPushButton::clicked,[=](){
        QPixmap pixmap(fc.nextfries());
        fLabel->setPixmap(pixmap);
        fLabel->show();
        if(cc.index!=1&&fc.index!=1&&hc.index!=1&&cc.index!=-1&&fc.index!=-1&&hc.index!=-1)
        {
            list11->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(cc.index!=1&&fc.index!=1&&tc.index!=1&&cc.index!=-1&&fc.index!=-1&&tc.index!=-1)
        {
            list13->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }


        if(fc.index!=1&&tc.index!=1&&hc.index!=1&&hc.index!=-1&&fc.index!=-1&&tc.index!=-1)
        {
            list14->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(fc.index!=1&&sc.index!=1&&hc.index!=1&&hc.index!=-1&&fc.index!=-1&&sc.index!=-1)
        {
            list15->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }


        if(cc.index!=1&&fc.index!=1&&sc.index!=1&&cc.index!=-1&&fc.index!=-1&&sc.index!=-1)
        {
            list16->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }


    });


    //汉堡效果
    connect(ham,&MyPushButton::clicked,[=](){
        QPixmap pixmap(hc.nextham());
        hLabel->setPixmap(pixmap);
        hLabel->show();
        if(cc.index!=1&&fc.index!=1&&hc.index!=1&&cc.index!=-1&&fc.index!=-1&&hc.index!=-1)
        {
            list11->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }


        if(tc.index!=1&&sc.index!=1&&hc.index!=1&&tc.index!=-1&&sc.index!=-1&&hc.index!=-1)
        {
            list12->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(fc.index!=1&&tc.index!=1&&hc.index!=1&&hc.index!=-1&&fc.index!=-1&&tc.index!=-1)
        {
            list14->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(fc.index!=1&&sc.index!=1&&hc.index!=1&&hc.index!=-1&&fc.index!=-1&&sc.index!=-1)
        {
            list15->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }



    });


    //热狗效果
    connect(hot,&MyPushButton::clicked,[=](){
        QPixmap pixmap(tc.nexthot());
        tLabel->setPixmap(pixmap);
        tLabel->show();
        if(tc.index!=1&&sc.index!=1&&hc.index!=1&&tc.index!=-1&&sc.index!=-1&&hc.index!=-1)
        {
            list12->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(cc.index!=1&&fc.index!=1&&tc.index!=1&&cc.index!=-1&&fc.index!=-1&&tc.index!=-1)
        {
            list13->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(fc.index!=1&&tc.index!=1&&hc.index!=1&&hc.index!=-1&&fc.index!=-1&&tc.index!=-1)
        {
            list14->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(tc.index!=1&&sc.index!=1&&cc.index!=1&&tc.index!=-1&&sc.index!=-1&&cc.index!=-1)
        {
            list17->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }




    });


    //可乐效果
    connect(cola,&MyPushButton::clicked,[=](){     
        QPixmap pixmap(cc.nextcola());
        cLabel->setPixmap(pixmap);
        cLabel->show();
        if(cc.index!=1&&fc.index!=1&&hc.index!=1&&cc.index!=-1&&fc.index!=-1&&hc.index!=-1)
        {
            list11->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(cc.index!=1&&fc.index!=1&&tc.index!=1&&cc.index!=-1&&fc.index!=-1&&tc.index!=-1)
        {
            list13->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }


        if(cc.index!=1&&fc.index!=1&&sc.index!=1&&cc.index!=-1&&fc.index!=-1&&sc.index!=-1)
        {
            list16->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(tc.index!=1&&sc.index!=1&&cc.index!=1&&tc.index!=-1&&sc.index!=-1&&cc.index!=-1)
        {
            list17->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }


    });



    //三明治效果
    connect(san,&MyPushButton::clicked,[=](){
        QPixmap pixmap(sc.nextsan());
        sLabel->setPixmap(pixmap);
        sLabel->show();
        if(tc.index!=1&&sc.index!=1&&hc.index!=1&&tc.index!=-1&&sc.index!=-1&&hc.index!=-1)
        {
            list12->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(fc.index!=1&&sc.index!=1&&hc.index!=1&&hc.index!=-1&&fc.index!=-1&&sc.index!=-1)
        {
            list15->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(hc.nextham());
                hLabel->setPixmap(pixmap);
                hLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });;
            }
        }


        if(cc.index!=1&&fc.index!=1&&sc.index!=1&&cc.index!=-1&&fc.index!=-1&&sc.index!=-1)
        {
            list16->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(fc.nextfries());
                fLabel->setPixmap(pixmap);
                fLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }

        if(tc.index!=1&&sc.index!=1&&cc.index!=1&&tc.index!=-1&&sc.index!=-1&&cc.index!=-1)
        {
            list17->hide();
            list1++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc.nexthot());
                tLabel->setPixmap(pixmap);
                tLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc.nextsan());
                sLabel->setPixmap(pixmap);
                sLabel->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc.nextcola());
                cLabel->setPixmap(pixmap);
                cLabel->show();
            });
            if(list1!=0&&list1!=1&&list1!=2&&list1!=3&&list1!=4&&list1!=5&&list1!=6)
            {
                QTimer::singleShot(500,this,[=](){
                    QLabel *success=new QLabel(this);
                    success->setFixedSize(200,200);
                    success->move(325,200);
                    QPixmap *successful=new QPixmap(":/images/success.png");
                    successful->scaled(success->size(),Qt::KeepAspectRatio);
                    success->setScaledContents(true);
                    success->setPixmap(*successful);
                    success->show();


                });
            }
        }





    });












}




void Level1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/level1back.png");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);


}


