#ifndef CAKE4_CHANGE_H
#define CAKE4_CHANGE_H
#include <QString>


class cake4_change
{
public:
    cake4_change();
    QString nextcake4();
    QString cake4[2]={":/images/cake4.png",":/images/blank.png"};
    int index;
};

#endif // CAKE4_CHANGE_H
