#ifndef SUSHI1_CHANGE_H
#define SUSHI1_CHANGE_H
#include <QString>


class sushi1_change
{
public:
    sushi1_change();
    QString nextsushi1();
    QString sushi1[2]={":/images/sushi1.png",":/images/blank.png"};
    int index;
};

#endif // SUSHI1_CHANGE_H
