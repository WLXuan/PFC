#ifndef LEVEL1_H
#define LEVEL1_H

#include <QMainWindow>
#include "fries_change.h"
#include "ham_change.h"
#include "hot_change.h"
#include "san_change.h"
#include "cola_change.h"

class Level1 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Level1(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent*);
    fries_change fc;
    ham_change hc;
    hot_change tc;
    san_change sc;
    cola_change cc;
    int list1=0;

signals:
    void chooselevelback();
    void hidelist11();

public slots:
};

#endif // LEVEL1_H
