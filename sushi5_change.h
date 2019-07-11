#ifndef SUSHI5_CHANGE_H
#define SUSHI5_CHANGE_H
#include <QString>


class sushi5_change
{
public:
    sushi5_change();
    QString nextsushi5();
    QString sushi5[2]={":/images/sushi5.png",":/images/blank.png"};
    int index;
};

#endif // SUSHI5_CHANGE_H
