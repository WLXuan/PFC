#ifndef LEVEL5_H
#define LEVEL5_H

#include <QMainWindow>
#include "tang1_change.h"
#include "tang2_change.h"
#include "tang3_change.h"
#include "tang4_change.h"
#include "tang5_change.h"
#include "tang6_change.h"

class Level5 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Level5(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent*);
    tang1_change tc1;
    tang2_change tc2;
    tang3_change tc3;
    tang4_change tc4;
    tang5_change tc5;
    tang6_change tc6;
    int list5=0;

signals:
    void chooselevelback();

public slots:
};

#endif // LEVEL5_H
