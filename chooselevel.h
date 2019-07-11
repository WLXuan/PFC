#ifndef CHOOSELEVEL_H
#define CHOOSELEVEL_H

#include <QMainWindow>
#include "level1.h"
#include "level2.h"
#include "level3.h"
#include "level4.h"
#include "level5.h"

class ChooseLevel : public QMainWindow
{
    Q_OBJECT
public:
    explicit ChooseLevel(QWidget *parent = nullptr);

    //重写绘图事件
    void paintEvent(QPaintEvent*);
    Level1 *chooselevel1;
    Level2 *chooselevel2;
    Level3 *chooselevel3;
    Level4 *chooselevel4;
    Level5 *chooselevel5;
signals:
    void chooselevelback();

public slots:
};

#endif // CHOOSELEVEL_H
