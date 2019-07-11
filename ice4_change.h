#ifndef ICE4_CHANGE_H
#define ICE4_CHANGE_H
#include <QString>

class ice4_change
{
public:
    ice4_change();
    QString nextice4();
    QString ice4[2]={":/images/ice4.png",":/images/blank.png"};
    int index;
};

#endif // ICE4_CHANGE_H
