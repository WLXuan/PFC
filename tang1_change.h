#ifndef TANG1_CHANGE_H
#define TANG1_CHANGE_H
#include <QString>


class tang1_change
{
public:
    tang1_change();
    QString nexttang1();
    QString tang1[2]={":/images/tang1.png",":/images/blank.png"};
    int index;
};

#endif // TANG1_CHANGE_H
