#include "level4.h"
#include "chooselevel.h"
#include "mypushbutton.h"
#include <QMenuBar>
#include <QPainter>
#include <QTimer>
#include <QLabel>
//冰激凌店

Level4::Level4(QWidget *parent) : QMainWindow(parent)
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
    QLabel *list41=new QLabel(this);
    list41->setFixedSize(100,180);
    list41->move(10,50);
    QPixmap *pixmap=new QPixmap(":/images/list41.png");
    pixmap->scaled(list41->size(),Qt::KeepAspectRatio);
    list41->setScaledContents(true);
    list41->setPixmap(*pixmap);

    //第二个list
    QLabel *list42=new QLabel(this);
    list42->setFixedSize(100,180);
    list42->move(140,50);
    QPixmap *pixmap2=new QPixmap(":/images/list42.png");
    pixmap2->scaled(list42->size(),Qt::KeepAspectRatio);
    list42->setScaledContents(true);
    list42->setPixmap(*pixmap2);

    //第三个list
    QLabel *list43=new QLabel(this);
    list43->setFixedSize(100,180);
    list43->move(270,50);
    QPixmap *pixmap3=new QPixmap(":/images/list43.png");
    pixmap3->scaled(list43->size(),Qt::KeepAspectRatio);
    list43->setScaledContents(true);
    list43->setPixmap(*pixmap3);

    //第四个list
    QLabel *list44=new QLabel(this);
    list44->setFixedSize(100,180);
    list44->move(400,50);
    QPixmap *pixmap4=new QPixmap(":/images/list44.png");
    pixmap4->scaled(list44->size(),Qt::KeepAspectRatio);
    list44->setScaledContents(true);
    list44->setPixmap(*pixmap4);

    //第五个list
    QLabel *list45=new QLabel(this);
    list45->setFixedSize(100,180);
    list45->move(530,50);
    QPixmap *pixmap5=new QPixmap(":/images/list45.png");
    pixmap5->scaled(list45->size(),Qt::KeepAspectRatio);
    list45->setScaledContents(true);
    list45->setPixmap(*pixmap5);

    //第六个list
    QLabel *list46=new QLabel(this);
    list46->setFixedSize(100,180);
    list46->move(660,50);
    QPixmap *pixmap6=new QPixmap(":/images/list46.png");
    pixmap6->scaled(list46->size(),Qt::KeepAspectRatio);
    list46->setScaledContents(true);
    list46->setPixmap(*pixmap6);

    //第七个list
    QLabel *list47=new QLabel(this);
    list47->setFixedSize(100,180);
    list47->move(790,50);
    QPixmap *pixmap7=new QPixmap(":/images/list47.png");
    pixmap7->scaled(list47->size(),Qt::KeepAspectRatio);
    list47->setScaledContents(true);
    list47->setPixmap(*pixmap7);



    //冰淇淋按钮
    MyPushButton *ice1=new MyPushButton(":/images/ice1s.png");
    ice1->setParent(this);
    ice1->move(0,480);
    ice1->setIconSize(QSize(150,150));
    ice1->setFixedSize(150,150);
    QLabel *i1Label=new QLabel(this);
    i1Label->setFixedSize(180,180);
    i1Label->move(100,250);

    MyPushButton *ice2=new MyPushButton(":/images/ice2s.png");
    ice2->setParent(this);
    ice2->move(150,440);
    ice2->setIconSize(QSize(150,150));
    ice2->setFixedSize(150,150);
    QLabel *i2Label=new QLabel(this);
    i2Label->setFixedSize(180,180);
    i2Label->move(200,250);

    MyPushButton *ice3=new MyPushButton(":/images/ice3s.png");
    ice3->setParent(this);
    ice3->move(300,490);
    ice3->setIconSize(QSize(150,150));
    ice3->setFixedSize(150,150);
    QLabel *i3Label=new QLabel(this);
    i3Label->setFixedSize(180,180);
    i3Label->move(300,250);

    MyPushButton *ice4=new MyPushButton(":/images/ice4s.png");
    ice4->setParent(this);
    ice4->move(430,430);
    ice4->setIconSize(QSize(150,150));
    ice4->setFixedSize(150,150);
    QLabel *i4Label=new QLabel(this);
    i4Label->setFixedSize(180,180);
    i4Label->move(400,250);

    MyPushButton *ice5=new MyPushButton(":/images/ice5s.png");
    ice5->setParent(this);
    ice5->move(600,480);
    ice5->setIconSize(QSize(150,150));
    ice5->setFixedSize(150,150);
    QLabel *i5Label=new QLabel(this);
    i5Label->setFixedSize(180,180);
    i5Label->move(500,250);

    MyPushButton *ice6=new MyPushButton(":/images/ice6.png");
    ice6->setParent(this);
    ice6->move(750,440);
    ice6->setIconSize(QSize(150,150));
    ice6->setFixedSize(120,120);
    QLabel *i6Label=new QLabel(this);
    i6Label->setFixedSize(180,180);
    i6Label->move(600,250);

    //按钮效果
    //1
    connect(ice1,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(ic1.nextice1());
        pixmap->scaled(i1Label->size(),Qt::KeepAspectRatio);
        i1Label->setScaledContents(true);
        i1Label->setPixmap(*pixmap);
        i1Label->show();

        if(ic1.index!=1&&ic2.index!=1&&ic3.index!=1&&ic1.index!=-1&&ic2.index!=-1&&ic3.index!=-1)
        {
            list41->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic1.index!=1&&ic5.index!=1&&ic3.index!=1&&ic1.index!=-1&&ic5.index!=-1&&ic3.index!=-1)
        {
            list42->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic1.index!=1&&ic5.index!=1&&ic4.index!=1&&ic1.index!=-1&&ic5.index!=-1&&ic4.index!=-1)
        {
            list45->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic6.index!=1&&ic1.index!=1&&ic4.index!=1&&ic6.index!=-1&&ic1.index!=-1&&ic4.index!=-1)
        {
            list47->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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
    connect(ice2,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(ic2.nextice2());
        pixmap->scaled(i2Label->size(),Qt::KeepAspectRatio);
        i2Label->setScaledContents(true);
        i2Label->setPixmap(*pixmap);
        i2Label->show();


        if(ic1.index!=1&&ic2.index!=1&&ic3.index!=1&&ic1.index!=-1&&ic2.index!=-1&&ic3.index!=-1)
        {
            list41->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic6.index!=1&&ic5.index!=1&&ic2.index!=1&&ic6.index!=-1&&ic5.index!=-1&&ic2.index!=-1)
        {
            list44->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic4.index!=1&&ic2.index!=1&&ic3.index!=1&&ic4.index!=-1&&ic2.index!=-1&&ic3.index!=-1)
        {
            list46->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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
    connect(ice3,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(ic3.nextice3());
        pixmap->scaled(i3Label->size(),Qt::KeepAspectRatio);
        i3Label->setScaledContents(true);
        i3Label->setPixmap(*pixmap);
        i3Label->show();


        if(ic1.index!=1&&ic2.index!=1&&ic3.index!=1&&ic1.index!=-1&&ic2.index!=-1&&ic3.index!=-1)
        {
            list41->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic1.index!=1&&ic5.index!=1&&ic3.index!=1&&ic1.index!=-1&&ic5.index!=-1&&ic3.index!=-1)
        {
            list42->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic4.index!=1&&ic2.index!=1&&ic3.index!=1&&ic4.index!=-1&&ic2.index!=-1&&ic3.index!=-1)
        {
            list46->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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
    connect(ice4,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(ic4.nextice4());
        pixmap->scaled(i4Label->size(),Qt::KeepAspectRatio);
        i4Label->setScaledContents(true);
        i4Label->setPixmap(*pixmap);
        i4Label->show();

        if(ic1.index!=1&&ic5.index!=1&&ic4.index!=1&&ic1.index!=-1&&ic5.index!=-1&&ic4.index!=-1)
        {
            list45->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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


        if(ic6.index!=1&&ic1.index!=1&&ic4.index!=1&&ic6.index!=-1&&ic1.index!=-1&&ic4.index!=-1)
        {
            list47->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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


        if(ic6.index!=1&&ic5.index!=1&&ic4.index!=1&&ic6.index!=-1&&ic5.index!=-1&&ic4.index!=-1)
        {
            list43->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic4.index!=1&&ic2.index!=1&&ic3.index!=1&&ic4.index!=-1&&ic2.index!=-1&&ic3.index!=-1)
        {
            list46->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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
    connect(ice5,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(ic5.nextice5());
        pixmap->scaled(i5Label->size(),Qt::KeepAspectRatio);
        i5Label->setScaledContents(true);
        i5Label->setPixmap(*pixmap);
        i5Label->show();

        if(ic1.index!=1&&ic5.index!=1&&ic3.index!=1&&ic1.index!=-1&&ic5.index!=-1&&ic3.index!=-1)
        {
            list42->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic3.nextice3());
                i3Label->setPixmap(pixmap);
                i3Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic1.index!=1&&ic5.index!=1&&ic4.index!=1&&ic1.index!=-1&&ic5.index!=-1&&ic4.index!=-1)
        {
            list45->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic6.index!=1&&ic5.index!=1&&ic4.index!=1&&ic6.index!=-1&&ic5.index!=-1&&ic4.index!=-1)
        {
            list43->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic6.index!=1&&ic5.index!=1&&ic2.index!=1&&ic6.index!=-1&&ic5.index!=-1&&ic2.index!=-1)
        {
            list44->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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
    connect(ice6,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(ic6.nextice6());
        pixmap->scaled(i6Label->size(),Qt::KeepAspectRatio);
        i6Label->setScaledContents(true);
        i6Label->setPixmap(*pixmap);
        i6Label->show();

        if(ic6.index!=1&&ic5.index!=1&&ic4.index!=1&&ic6.index!=-1&&ic5.index!=-1&&ic4.index!=-1)
        {
            list43->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic6.index!=1&&ic5.index!=1&&ic2.index!=1&&ic6.index!=-1&&ic5.index!=-1&&ic2.index!=-1)
        {
            list44->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic5.nextice5());
                i5Label->setPixmap(pixmap);
                i5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic2.nextice2());
                i2Label->setPixmap(pixmap);
                i2Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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

        if(ic6.index!=1&&ic1.index!=1&&ic4.index!=1&&ic6.index!=-1&&ic1.index!=-1&&ic4.index!=-1)
        {
            list47->hide();
            list4++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic6.nextice6());
                i6Label->setPixmap(pixmap);
                i6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic1.nextice1());
                i1Label->setPixmap(pixmap);
                i1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(ic4.nextice4());
                i4Label->setPixmap(pixmap);
                i4Label->show();
            });
            if(list4!=0&&list4!=1&&list4!=2&&list4!=3&&list4!=4&&list4!=5&&list4!=6)
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
void Level4::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/level4back.jpg");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);

}
