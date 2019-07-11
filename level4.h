#ifndef LEVEL4_H
#define LEVEL4_H

#include <QMainWindow>
#include "ice1_change.h"
#include "ice2_change.h"
#include "ice3_change.h"
#include "ice4_change.h"
#include "ice5_change.h"
#include "ice6_change.h"

class Level4 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Level4(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent*);

    ice1_change ic1;
    ice2_change ic2;
    ice3_change ic3;
    ice4_change ic4;
    ice5_change ic5;
    ice6_change ic6;
    int list4=0;
signals:
    void chooselevelback();

public slots:
};

#endif // LEVEL4_H
