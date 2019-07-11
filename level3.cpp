#include "level3.h"
#include "chooselevel.h"
#include "mypushbutton.h"
#include <QMenuBar>
#include <QPainter>
#include <QTimer>
#include <QLabel>
//寿司店

Level3::Level3(QWidget *parent) : QMainWindow(parent)
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
    QLabel *list31=new QLabel(this);
    list31->setFixedSize(100,180);
    list31->move(10,50);
    QPixmap *pixmap=new QPixmap(":/images/list31.png");
    pixmap->scaled(list31->size(),Qt::KeepAspectRatio);
    list31->setScaledContents(true);
    list31->setPixmap(*pixmap);

    //第二个list
    QLabel *list32=new QLabel(this);
    list32->setFixedSize(100,180);
    list32->move(140,50);
    QPixmap *pixmap2=new QPixmap(":/images/list32.png");
    pixmap2->scaled(list32->size(),Qt::KeepAspectRatio);
    list32->setScaledContents(true);
    list32->setPixmap(*pixmap2);

    //第三个list
    QLabel *list33=new QLabel(this);
    list33->setFixedSize(100,180);
    list33->move(270,50);
    QPixmap *pixmap3=new QPixmap(":/images/list33.png");
    pixmap3->scaled(list33->size(),Qt::KeepAspectRatio);
    list33->setScaledContents(true);
    list33->setPixmap(*pixmap3);

    //第四个list
    QLabel *list34=new QLabel(this);
    list34->setFixedSize(100,180);
    list34->move(400,50);
    QPixmap *pixmap4=new QPixmap(":/images/list34.png");
    pixmap4->scaled(list34->size(),Qt::KeepAspectRatio);
    list34->setScaledContents(true);
    list34->setPixmap(*pixmap4);

    //第五个list
    QLabel *list35=new QLabel(this);
    list35->setFixedSize(100,180);
    list35->move(530,50);
    QPixmap *pixmap5=new QPixmap(":/images/list35.png");
    pixmap5->scaled(list35->size(),Qt::KeepAspectRatio);
    list35->setScaledContents(true);
    list35->setPixmap(*pixmap5);

    //第六个list
    QLabel *list36=new QLabel(this);
    list36->setFixedSize(100,180);
    list36->move(660,50);
    QPixmap *pixmap6=new QPixmap(":/images/list36.png");
    pixmap6->scaled(list36->size(),Qt::KeepAspectRatio);
    list36->setScaledContents(true);
    list36->setPixmap(*pixmap6);

    //第七个list
    QLabel *list37=new QLabel(this);
    list37->setFixedSize(100,180);
    list37->move(790,50);
    QPixmap *pixmap7=new QPixmap(":/images/list37.png");
    pixmap7->scaled(list37->size(),Qt::KeepAspectRatio);
    list37->setScaledContents(true);
    list37->setPixmap(*pixmap7);





    //寿司按钮
    MyPushButton *sushi1=new MyPushButton(":/images/sushi1s.png");
    sushi1->setParent(this);
    sushi1->move(10,500);
    QLabel *s1Label=new QLabel(this);
    s1Label->setFixedSize(200,200);
    s1Label->move(100,270);

    MyPushButton *sushi2=new MyPushButton(":/images/sushi3s.png");
    sushi2->setParent(this);
    sushi2->move(160,460);
    QLabel *s2Label=new QLabel(this);
    s2Label->setFixedSize(200,200);
    s2Label->move(200,270);

    MyPushButton *sushi3=new MyPushButton(":/images/sushi2s.png");
    sushi3->setParent(this);
    sushi3->move(310,500);
    QLabel *s3Label=new QLabel(this);
    s3Label->setFixedSize(200,200);
    s3Label->move(300,270);

    MyPushButton *sushi4=new MyPushButton(":/images/sushi4s.png");
    sushi4->setParent(this);
    sushi4->move(460,460);
    QLabel *s4Label=new QLabel(this);
    s4Label->setFixedSize(200,200);
    s4Label->move(400,270);

    MyPushButton *sushi5=new MyPushButton(":/images/sushi5s.png");
    sushi5->setParent(this);
    sushi5->move(610,500);
    QLabel *s5Label=new QLabel(this);
    s5Label->setFixedSize(200,200);
    s5Label->move(500,270);

    MyPushButton *sushi6=new MyPushButton(":/images/sushi6.png");
    sushi6->setParent(this);
    sushi6->move(750,470);
    sushi6->setIconSize(QSize(100,100));
    sushi6->setFixedSize(110,110);
    QLabel *s6Label=new QLabel(this);
    s6Label->setFixedSize(110,110);
    s6Label->move(660,300);


    //按钮效果
    //1
    connect(sushi1,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(sc1.nextsushi1());
        pixmap->scaled(s1Label->size(),Qt::KeepAspectRatio);
        s1Label->setScaledContents(true);
        s1Label->setPixmap(*pixmap);
        s1Label->show();
        if(sc1.index!=1&&sc2.index!=1&&sc3.index!=1&&sc1.index!=-1&&sc2.index!=-1&&sc3.index!=-1)
        {
            list31->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc1.index!=1&&sc2.index!=1&&sc5.index!=1&&sc1.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list33->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
        if(sc1.index!=1&&sc6.index!=1&&sc5.index!=1&&sc1.index!=-1&&sc6.index!=-1&&sc5.index!=-1)
        {
            list34->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc1.index!=1&&sc6.index!=1&&sc3.index!=1&&sc1.index!=-1&&sc6.index!=-1&&sc3.index!=-1)
        {
            list36->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
    connect(sushi2,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(sc2.nextsushi2());
        pixmap->scaled(s2Label->size(),Qt::KeepAspectRatio);
        s2Label->setScaledContents(true);
        s2Label->setPixmap(*pixmap);
        s2Label->show();
        if(sc1.index!=1&&sc2.index!=1&&sc3.index!=1&&sc1.index!=-1&&sc2.index!=-1&&sc3.index!=-1)
        {
            list31->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
        if(sc1.index!=1&&sc2.index!=1&&sc5.index!=1&&sc1.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list33->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
        if(sc4.index!=1&&sc2.index!=1&&sc5.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list35->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc6.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc6.index!=-1)
        {
            list37->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
    connect(sushi3,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(sc3.nextsushi3());
        pixmap->scaled(s3Label->size(),Qt::KeepAspectRatio);
        s3Label->setScaledContents(true);
        s3Label->setPixmap(*pixmap);
        s3Label->show();
        if(sc1.index!=1&&sc2.index!=1&&sc3.index!=1&&sc1.index!=-1&&sc2.index!=-1&&sc3.index!=-1)
        {
            list31->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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


        if(sc4.index!=1&&sc6.index!=1&&sc3.index!=1&&sc4.index!=-1&&sc6.index!=-1&&sc3.index!=-1)
        {
            list32->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc1.index!=1&&sc6.index!=1&&sc3.index!=1&&sc1.index!=-1&&sc6.index!=-1&&sc3.index!=-1)
        {
            list36->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
    connect(sushi4,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(sc4.nextsushi4());
        pixmap->scaled(s4Label->size(),Qt::KeepAspectRatio);
        s4Label->setScaledContents(true);
        s4Label->setPixmap(*pixmap);
        s4Label->show();
        if(sc4.index!=1&&sc6.index!=1&&sc3.index!=1&&sc4.index!=-1&&sc6.index!=-1&&sc3.index!=-1)
        {
            list32->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc5.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list35->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc5.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list35->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc6.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc6.index!=-1)
        {
            list37->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
    connect(sushi5,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(sc5.nextsushi5());
        pixmap->scaled(s5Label->size(),Qt::KeepAspectRatio);
        s5Label->setScaledContents(true);
        s5Label->setPixmap(*pixmap);
        s5Label->show();
        if(sc1.index!=1&&sc2.index!=1&&sc5.index!=1&&sc1.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list33->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
        if(sc1.index!=1&&sc6.index!=1&&sc5.index!=1&&sc1.index!=-1&&sc6.index!=-1&&sc5.index!=-1)
        {
            list34->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc5.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list35->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
    connect(sushi6,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(sc6.nextsushi6());
        pixmap->scaled(s6Label->size(),Qt::KeepAspectRatio);
        s6Label->setScaledContents(true);
        s6Label->setPixmap(*pixmap);
        s6Label->show();
        if(sc4.index!=1&&sc6.index!=1&&sc3.index!=1&&sc4.index!=-1&&sc6.index!=-1&&sc3.index!=-1)
        {
            list32->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
        if(sc1.index!=1&&sc6.index!=1&&sc5.index!=1&&sc1.index!=-1&&sc6.index!=-1&&sc5.index!=-1)
        {
            list34->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
        if(sc1.index!=1&&sc6.index!=1&&sc3.index!=1&&sc1.index!=-1&&sc6.index!=-1&&sc3.index!=-1)
        {
            list36->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc1.nextsushi1());
                s1Label->setPixmap(pixmap);
                s1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc3.nextsushi3());
                s3Label->setPixmap(pixmap);
                s3Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc5.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc5.index!=-1)
        {
            list35->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc5.nextsushi5());
                s5Label->setPixmap(pixmap);
                s5Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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

        if(sc4.index!=1&&sc2.index!=1&&sc6.index!=1&&sc4.index!=-1&&sc2.index!=-1&&sc6.index!=-1)
        {
            list37->hide();
            list2++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc4.nextsushi4());
                s4Label->setPixmap(pixmap);
                s4Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc2.nextsushi2());
                s2Label->setPixmap(pixmap);
                s2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(sc6.nextsushi6());
                s6Label->setPixmap(pixmap);
                s6Label->show();
            });
            if(list2!=0&&list2!=1&&list2!=2&&list2!=3&&list2!=4&&list2!=5&&list2!=6)
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
void Level3::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/level3back.png");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);

}
