#include "level2.h"
#include "chooselevel.h"
#include "mypushbutton.h"
#include <QMenuBar>
#include <QPainter>
#include <QTimer>
#include <QLabel>
//蛋糕店

Level2::Level2(QWidget *parent) : QMainWindow(parent)
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
    QLabel *list21=new QLabel(this);
    list21->setFixedSize(100,180);
    list21->move(10,50);
    QPixmap *pixmap=new QPixmap(":/images/list21.png");
    pixmap->scaled(list21->size(),Qt::KeepAspectRatio);
    list21->setScaledContents(true);
    list21->setPixmap(*pixmap);

    //第二个list
    QLabel *list22=new QLabel(this);
    list22->setFixedSize(100,180);
    list22->move(140,50);
    QPixmap *pixmap2=new QPixmap(":/images/list22.png");
    pixmap2->scaled(list22->size(),Qt::KeepAspectRatio);
    list22->setScaledContents(true);
    list22->setPixmap(*pixmap2);

    //第三个list
    QLabel *list23=new QLabel(this);
    list23->setFixedSize(100,180);
    list23->move(270,50);
    QPixmap *pixmap3=new QPixmap(":/images/list23.png");
    pixmap3->scaled(list23->size(),Qt::KeepAspectRatio);
    list23->setScaledContents(true);
    list23->setPixmap(*pixmap3);

    //第四个list
    QLabel *list24=new QLabel(this);
    list24->setFixedSize(100,180);
    list24->move(400,50);
    QPixmap *pixmap4=new QPixmap(":/images/list24.png");
    pixmap4->scaled(list24->size(),Qt::KeepAspectRatio);
    list24->setScaledContents(true);
    list24->setPixmap(*pixmap4);

    //第五个list
    QLabel *list25=new QLabel(this);
    list25->setFixedSize(100,180);
    list25->move(530,50);
    QPixmap *pixmap5=new QPixmap(":/images/list25.png");
    pixmap5->scaled(list25->size(),Qt::KeepAspectRatio);
    list25->setScaledContents(true);
    list25->setPixmap(*pixmap5);

    //第六个list
    QLabel *list26=new QLabel(this);
    list26->setFixedSize(100,180);
    list26->move(660,50);
    QPixmap *pixmap6=new QPixmap(":/images/list26.png");
    pixmap6->scaled(list26->size(),Qt::KeepAspectRatio);
    list26->setScaledContents(true);
    list26->setPixmap(*pixmap6);

    //第七个list
    QLabel *list27=new QLabel(this);
    list27->setFixedSize(100,180);
    list27->move(790,50);
    QPixmap *pixmap7=new QPixmap(":/images/list27.png");
    pixmap7->scaled(list27->size(),Qt::KeepAspectRatio);
    list27->setScaledContents(true);
    list27->setPixmap(*pixmap7);



    //蛋糕按钮
    //1
    MyPushButton *cake1=new MyPushButton(":/images/cake1s.png");
    cake1->setParent(this);
    cake1->move(10,500);
    QLabel *c1Label=new QLabel(this);
    c1Label->setFixedSize(200,200);
    c1Label->move(100,270);

    //2
    MyPushButton *cake2=new MyPushButton(":/images/cake5s.png");
    cake2->setParent(this);
    cake2->move(160,460);
    QLabel *c2Label=new QLabel(this);
    c2Label->setFixedSize(200,200);
    c2Label->move(200,270);


    //3
    MyPushButton *cake3=new MyPushButton(":/images/cake3s.png");
    cake3->setParent(this);
    cake3->move(310,500);
    QLabel *c3Label=new QLabel(this);
    c3Label->setFixedSize(200,200);
    c3Label->move(300,270);


    //4
    MyPushButton *cake4=new MyPushButton(":/images/cake4s.png");
    cake4->setParent(this);
    cake4->move(460,460);
    QLabel *c4Label=new QLabel(this);
    c4Label->setFixedSize(200,200);
    c4Label->move(400,270);


    //5
    MyPushButton *cake5=new MyPushButton(":/images/cake2s.png");
    cake5->setParent(this);
    cake5->move(610,500);
    QLabel *c5Label=new QLabel(this);
    c5Label->setFixedSize(200,200);
    c5Label->move(500,270);


    //6
    MyPushButton *cake6=new MyPushButton(":/images/cake6.png");
    cake6->setParent(this);
    cake6->move(750,450);
    QLabel *c6Label=new QLabel(this);
    c6Label->setFixedSize(200,200);
    c6Label->move(600,270);


    //按钮效果
    //1
    connect(cake1,&MyPushButton::clicked,[=](){
        QPixmap pixmap(cc1.nextcake1());
        c1Label->setPixmap(pixmap);
        c1Label->show();
        if(cc1.index!=1&&cc2.index!=1&&cc5.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc5.index!=-1)
        {
            list21->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc1.index!=1&&cc2.index!=1&&cc4.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc4.index!=-1)
        {
            list22->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc1.index!=1&&cc2.index!=1&&cc3.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc3.index!=-1)
        {
            list24->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc1.index!=1&&cc3.index!=1&&cc5.index!=1&&cc1.index!=-1&&cc3.index!=-1&&cc5.index!=-1)
        {
            list26->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

    //2
    connect(cake2,&MyPushButton::clicked,[=](){
        QPixmap pixmap(cc2.nextcake2());
        c2Label->setPixmap(pixmap);
        c2Label->show();

        if(cc1.index!=1&&cc2.index!=1&&cc5.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc5.index!=-1)
        {
            list21->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc1.index!=1&&cc2.index!=1&&cc4.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc4.index!=-1)
        {
            list22->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc1.index!=1&&cc2.index!=1&&cc3.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc3.index!=-1)
        {
            list24->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc6.index!=1&&cc2.index!=1&&cc4.index!=1&&cc6.index!=-1&&cc2.index!=-1&&cc4.index!=-1)
        {
            list25->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

    //3
    connect(cake3,&MyPushButton::clicked,[=](){
        QPixmap pixmap(cc3.nextcake3());
        c3Label->setPixmap(pixmap);
        c3Label->show();

        if(cc3.index!=1&&cc5.index!=1&&cc6.index!=1&&cc3.index!=-1&&cc5.index!=-1&&cc6.index!=-1)
        {
            list23->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc1.index!=1&&cc2.index!=1&&cc3.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc3.index!=-1)
        {
            list24->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc1.index!=1&&cc3.index!=1&&cc5.index!=1&&cc1.index!=-1&&cc3.index!=-1&&cc5.index!=-1)
        {
            list26->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc3.index!=1&&cc4.index!=1&&cc6.index!=1&&cc3.index!=-1&&cc4.index!=-1&&cc6.index!=-1)
        {
            list27->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

    //4
    connect(cake4,&MyPushButton::clicked,[=](){
        QPixmap pixmap(cc4.nextcake4());
        c4Label->setPixmap(pixmap);
        c4Label->show();
        if(cc1.index!=1&&cc2.index!=1&&cc4.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc4.index!=-1)
        {
            list22->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc6.index!=1&&cc2.index!=1&&cc4.index!=1&&cc6.index!=-1&&cc2.index!=-1&&cc4.index!=-1)
        {
            list25->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc3.index!=1&&cc4.index!=1&&cc6.index!=1&&cc3.index!=-1&&cc4.index!=-1&&cc6.index!=-1)
        {
            list27->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

    //5
    connect(cake5,&MyPushButton::clicked,[=](){
        QPixmap pixmap(cc5.nextcake5());
        c5Label->setPixmap(pixmap);
        c5Label->show();
        if(cc1.index!=1&&cc2.index!=1&&cc5.index!=1&&cc1.index!=-1&&cc2.index!=-1&&cc5.index!=-1)
        {
            list21->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc3.index!=1&&cc5.index!=1&&cc6.index!=1&&cc3.index!=-1&&cc5.index!=-1&&cc6.index!=-1)
        {
            list23->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc1.index!=1&&cc3.index!=1&&cc5.index!=1&&cc1.index!=-1&&cc3.index!=-1&&cc5.index!=-1)
        {
            list26->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc1.nextcake1());
                c1Label->setPixmap(pixmap);
                c1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

    //6
    connect(cake6,&MyPushButton::clicked,[=](){
        QPixmap pixmap(cc6.nextcake6());
        c6Label->setPixmap(pixmap);
        c6Label->show();

        if(cc3.index!=1&&cc5.index!=1&&cc6.index!=1&&cc3.index!=-1&&cc5.index!=-1&&cc6.index!=-1)
        {
            list23->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc5.nextcake5());
                c5Label->setPixmap(pixmap);
                c5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
        if(cc6.index!=1&&cc2.index!=1&&cc4.index!=1&&cc6.index!=-1&&cc2.index!=-1&&cc4.index!=-1)
        {
            list25->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc2.nextcake2());
                c2Label->setPixmap(pixmap);
                c2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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

        if(cc3.index!=1&&cc4.index!=1&&cc6.index!=1&&cc3.index!=-1&&cc4.index!=-1&&cc6.index!=-1)
        {
            list27->hide();
            list3++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc3.nextcake3());
                c3Label->setPixmap(pixmap);
                c3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc4.nextcake4());
                c4Label->setPixmap(pixmap);
                c4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(cc6.nextcake6());
                c6Label->setPixmap(pixmap);
                c6Label->show();
            });
            if(list3!=0&&list3!=1&&list3!=2&&list3!=3&&list3!=4&&list3!=5&&list3!=6)
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
void Level2::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/level2back.png");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);

}
