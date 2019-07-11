#include "mypushbutton.h"
#include <QDebug>
#include <QSize>
#include <QPropertyAnimation>

MyPushButton::MyPushButton(QString normalImg,QString pressimg)
{
    this->normalImgPath=normalImg;
    this->pressImgPath=pressimg;
    QPixmap pix;
    bool ret=pix.load(this->normalImgPath);
    if(!ret)
    {
        QString str=QString("loading fail").arg(this->normalImgPath);
        qDebug()<<str;
        return;
    }
    //设定图片大小
    this->setFixedSize(pix.width(),pix.height());
    //设置不规则图片样式
    this->setStyleSheet("QPushButton(border:0;)");
    //设置图片
    this->setIcon(pix);
    //设置图标大小
    this->setIconSize(QSize(pix.width(),pix.height()));
    this->setFlat(true);

}

void MyPushButton::zoom1()
{
    QPropertyAnimation *animation=new QPropertyAnimation(this,"geometry");
    //设定时间间隔
    animation->setDuration(200);
    //设置起始位置
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //设置结束位置
    animation->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //设置曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);
    //执行
    animation->start();
}

void MyPushButton::zoom2()
{
    QPropertyAnimation *animation=new QPropertyAnimation(this,"geometry");
    //设定时间间隔
    animation->setDuration(200);
    //设置起始位置
    animation->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //设置结束位置
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //设置曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);
    //执行
    animation->start();
}
