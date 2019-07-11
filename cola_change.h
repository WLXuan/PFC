#ifndef COLA_CHANGE_H
#define COLA_CHANGE_H
#include <QString>


class cola_change
{
public:
    cola_change();
    QString nextcola();
    QString cola[2]={":/images/cola.png",":/images/blank.png"};
    int index;
};

#endif // COLA_CHANGE_H
