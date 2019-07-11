#include "level5.h"
#include "chooselevel.h"
#include "mypushbutton.h"
#include <QMenuBar>
#include <QPainter>
#include <QTimer>
#include <QLabel>

Level5::Level5(QWidget *parent) : QMainWindow(parent)
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
    QLabel *list51=new QLabel(this);
    list51->setFixedSize(100,180);
    list51->move(10,50);
    QPixmap *pixmap=new QPixmap(":/images/list51.png");
    pixmap->scaled(list51->size(),Qt::KeepAspectRatio);
    list51->setScaledContents(true);
    list51->setPixmap(*pixmap);

    //第二个list
    QLabel *list52=new QLabel(this);
    list52->setFixedSize(100,180);
    list52->move(140,50);
    QPixmap *pixmap2=new QPixmap(":/images/list52.png");
    pixmap2->scaled(list52->size(),Qt::KeepAspectRatio);
    list52->setScaledContents(true);
    list52->setPixmap(*pixmap2);

    //第三个list
    QLabel *list53=new QLabel(this);
    list53->setFixedSize(100,180);
    list53->move(270,50);
    QPixmap *pixmap3=new QPixmap(":/images/list53.png");
    pixmap3->scaled(list53->size(),Qt::KeepAspectRatio);
    list53->setScaledContents(true);
    list53->setPixmap(*pixmap3);

    //第四个list
    QLabel *list54=new QLabel(this);
    list54->setFixedSize(100,180);
    list54->move(400,50);
    QPixmap *pixmap4=new QPixmap(":/images/list54.png");
    pixmap4->scaled(list54->size(),Qt::KeepAspectRatio);
    list54->setScaledContents(true);
    list54->setPixmap(*pixmap4);

    //第五个list
    QLabel *list55=new QLabel(this);
    list55->setFixedSize(100,180);
    list55->move(530,50);
    QPixmap *pixmap5=new QPixmap(":/images/list55.png");
    pixmap5->scaled(list55->size(),Qt::KeepAspectRatio);
    list55->setScaledContents(true);
    list55->setPixmap(*pixmap5);

    //第六个list
    QLabel *list56=new QLabel(this);
    list56->setFixedSize(100,180);
    list56->move(660,50);
    QPixmap *pixmap6=new QPixmap(":/images/list56.png");
    pixmap6->scaled(list56->size(),Qt::KeepAspectRatio);
    list56->setScaledContents(true);
    list56->setPixmap(*pixmap6);

    //第七个list
    QLabel *list57=new QLabel(this);
    list57->setFixedSize(100,180);
    list57->move(790,50);
    QPixmap *pixmap7=new QPixmap(":/images/list57.png");
    pixmap7->scaled(list57->size(),Qt::KeepAspectRatio);
    list57->setScaledContents(true);
    list57->setPixmap(*pixmap7);




    //棉花糖按钮
    MyPushButton *tang1=new MyPushButton(":/images/tang1s.png");
    tang1->setParent(this);
    tang1->move(0,520);
    tang1->setIconSize(QSize(170,170));
    tang1->setFixedSize(150,150);
    QLabel *t1Label=new QLabel(this);
    t1Label->setFixedSize(150,150);
    t1Label->move(100,270);

    MyPushButton *tang2=new MyPushButton(":/images/tang2s.png");
    tang2->setParent(this);
    tang2->move(140,440);
    tang2->setIconSize(QSize(200,200));
    tang2->setFixedSize(150,150);
    QLabel *t2Label=new QLabel(this);
    t2Label->setFixedSize(150,150);
    t2Label->move(200,270);

    MyPushButton *tang3=new MyPushButton(":/images/tang3s.png");
    tang3->setParent(this);
    tang3->move(270,530);
    tang3->setIconSize(QSize(200,200));
    tang3->setFixedSize(150,150);
    QLabel *t3Label=new QLabel(this);
    t3Label->setFixedSize(150,150);
    t3Label->move(300,270);

    MyPushButton *tang4=new MyPushButton(":/images/tang4s.png");
    tang4->setParent(this);
    tang4->move(400,450);
    tang4->setIconSize(QSize(200,200));
    tang4->setFixedSize(150,150);
    QLabel *t4Label=new QLabel(this);
    t4Label->setFixedSize(150,150);
    t4Label->move(400,270);

    MyPushButton *tang5=new MyPushButton(":/images/tang5s.png");
    tang5->setParent(this);
    tang5->move(580,520);
    tang5->setIconSize(QSize(200,200));
    tang5->setFixedSize(150,150);
    QLabel *t5Label=new QLabel(this);
    t5Label->setFixedSize(150,150);
    t5Label->move(500,270);

    MyPushButton *tang6=new MyPushButton(":/images/tang6.png");
    tang6->setParent(this);
    tang6->move(730,440);
    tang6->setIconSize(QSize(230,230));
    tang6->setFixedSize(120,120);
    QLabel *t6Label=new QLabel(this);
    t6Label->setFixedSize(170,170);
    t6Label->move(600,270);


    //按钮效果
    //1
    connect(tang1,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(tc1.nexttang1());
        pixmap->scaled(t1Label->size(),Qt::KeepAspectRatio);
        t1Label->setScaledContents(true);
        t1Label->setPixmap(*pixmap);
        t1Label->show();

        if(tc6.index!=1&&tc1.index!=1&&tc4.index!=1&&tc6.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list53->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc1.index!=1&&tc4.index!=1&&tc5.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list51->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc3.index!=1&&tc1.index!=1&&tc4.index!=1&&tc3.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list55->hide();
         list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc1.index!=1&&tc6.index!=1&&tc5.index!=-1&&tc1.index!=-1&&tc6.index!=-1)
        {
            list54->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc2.index!=1&&tc1.index!=1&&tc6.index!=1&&tc2.index!=-1&&tc1.index!=-1&&tc6.index!=-1)
        {
            list56->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc2.nexttang2());
                t2Label->setPixmap(pixmap);
                t2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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
    connect(tang2,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(tc2.nexttang2());
        pixmap->scaled(t2Label->size(),Qt::KeepAspectRatio);
        t2Label->setScaledContents(true);
        t2Label->setPixmap(*pixmap);
        t2Label->show();

        if(tc3.index!=1&&tc2.index!=1&&tc4.index!=1&&tc3.index!=-1&&tc2.index!=-1&&tc4.index!=-1)
        {
            list52->hide();
         list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc2.nexttang2());
                t2Label->setPixmap(pixmap);
                t2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc2.index!=1&&tc1.index!=1&&tc6.index!=1&&tc2.index!=-1&&tc1.index!=-1&&tc6.index!=-1)
        {
            list56->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc2.nexttang2());
                t2Label->setPixmap(pixmap);
                t2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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
    connect(tang3,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(tc3.nexttang3());
        pixmap->scaled(t3Label->size(),Qt::KeepAspectRatio);
        t3Label->setScaledContents(true);
        t3Label->setPixmap(*pixmap);
        t3Label->show();

        if(tc3.index!=1&&tc1.index!=1&&tc4.index!=1&&tc3.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list55->hide();
         list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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


        if(tc3.index!=1&&tc2.index!=1&&tc4.index!=1&&tc3.index!=-1&&tc2.index!=-1&&tc4.index!=-1)
        {
            list52->hide();
         list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc2.nexttang2());
                t2Label->setPixmap(pixmap);
                t2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc3.index!=1&&tc6.index!=1&&tc5.index!=-1&&tc3.index!=-1&&tc6.index!=-1)
        {
            list57->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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
    connect(tang4,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(tc4.nexttang4());
        pixmap->scaled(t4Label->size(),Qt::KeepAspectRatio);
        t4Label->setScaledContents(true);
        t4Label->setPixmap(*pixmap);
        t4Label->show();

        if(tc6.index!=1&&tc1.index!=1&&tc4.index!=1&&tc6.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list53->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc1.index!=1&&tc4.index!=1&&tc5.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list51->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc3.index!=1&&tc1.index!=1&&tc4.index!=1&&tc3.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list55->hide();
         list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc3.index!=1&&tc2.index!=1&&tc4.index!=1&&tc3.index!=-1&&tc2.index!=-1&&tc4.index!=-1)
        {
            list52->hide();
         list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc2.nexttang2());
                t2Label->setPixmap(pixmap);
                t2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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
    connect(tang5,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(tc5.nexttang5());
        pixmap->scaled(t5Label->size(),Qt::KeepAspectRatio);
        t5Label->setScaledContents(true);
        t5Label->setPixmap(*pixmap);
        t5Label->show();

        if(tc5.index!=1&&tc1.index!=1&&tc4.index!=1&&tc5.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list51->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc1.index!=1&&tc6.index!=1&&tc5.index!=-1&&tc1.index!=-1&&tc6.index!=-1)
        {
            list54->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc3.index!=1&&tc6.index!=1&&tc5.index!=-1&&tc3.index!=-1&&tc6.index!=-1)
        {
            list57->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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
    connect(tang6,&MyPushButton::clicked,[=](){
        QPixmap *pixmap=new QPixmap(tc6.nexttang6());
        pixmap->scaled(t6Label->size(),Qt::KeepAspectRatio);
        t6Label->setScaledContents(true);
        t6Label->setPixmap(*pixmap);
        t6Label->show();

        if(tc6.index!=1&&tc1.index!=1&&tc4.index!=1&&tc6.index!=-1&&tc1.index!=-1&&tc4.index!=-1)
        {
            list53->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc4.nexttang4());
                t4Label->setPixmap(pixmap);
                t4Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc1.index!=1&&tc6.index!=1&&tc5.index!=-1&&tc1.index!=-1&&tc6.index!=-1)
        {
            list54->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc2.index!=1&&tc1.index!=1&&tc6.index!=1&&tc2.index!=-1&&tc1.index!=-1&&tc6.index!=-1)
        {
            list56->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc2.nexttang2());
                t2Label->setPixmap(pixmap);
                t2Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc1.nexttang1());
                t1Label->setPixmap(pixmap);
                t1Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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

        if(tc5.index!=1&&tc3.index!=1&&tc6.index!=1&&tc5.index!=-1&&tc3.index!=-1&&tc6.index!=-1)
        {
            list57->hide();
            list5++;
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc5.nexttang5());
                t5Label->setPixmap(pixmap);
                t5Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc3.nexttang3());
                t3Label->setPixmap(pixmap);
                t3Label->show();
            });
            QTimer::singleShot(200,this,[=](){
                QPixmap pixmap(tc6.nexttang6());
                t6Label->setPixmap(pixmap);
                t6Label->show();
            });
            if(list5!=0&&list5!=1&&list5!=2&&list5!=3&&list5!=4&&list5!=5&&list5!=6)
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
void Level5::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/images/level5back.jpg");
    painter.drawPixmap(0,15,this->width(),this->height(),pix);

}
