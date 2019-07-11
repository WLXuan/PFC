#ifndef SUSHI4_CHANGE_H
#define SUSHI4_CHANGE_H
#include <QString>


class sushi4_change
{
public:
    sushi4_change();
    QString nextsushi4();
    QString sushi4[2]={":/images/sushi4.png",":/images/blank.png"};
    int index;
};

#endif // SUSHI4_CHANGE_H
