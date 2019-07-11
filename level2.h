#ifndef LEVEL2_H
#define LEVEL2_H

#include <QMainWindow>
#include "cake1_change.h"
#include "cake2_change.h"
#include "cake3_change.h"
#include "cake4_change.h"
#include "cake5_change.h"
#include "cake6_change.h"


class Level2 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Level2(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent*);
    cake1_change cc1;
    cake2_change cc2;
    cake3_change cc3;
    cake4_change cc4;
    cake5_change cc5;
    cake6_change cc6;
    int list3=0;

signals:
    void chooselevelback();

public slots:
};

#endif // LEVEL2_H
