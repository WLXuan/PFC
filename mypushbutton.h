#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    MyPushButton(QString normalImg,QString pressImg="");
    QString normalImgPath;
    QString pressImgPath;

    //向上向下跳跃
    void zoom1();
    void zoom2();

signals:

public slots:
};

#endif // MYPUSHBUTTON_H
