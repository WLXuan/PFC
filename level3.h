#ifndef LEVEL3_H
#define LEVEL3_H

#include <QMainWindow>
#include "sushi1_change.h"
#include "sushi2_change.h"
#include "sushi3_change.h"
#include "sushi4_change.h"
#include "sushi5_change.h"
#include "sushi6_change.h"

class Level3 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Level3(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent*);
    sushi1_change sc1;
    sushi2_change sc2;
    sushi3_change sc3;
    sushi4_change sc4;
    sushi5_change sc5;
    sushi6_change sc6;
    int list2=0;

signals:
    void chooselevelback();

public slots:
};

#endif // LEVEL3_H
