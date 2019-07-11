#ifndef ICE1_CHANGE_H
#define ICE1_CHANGE_H
#include <QString>


class ice1_change
{
public:
    ice1_change();
    QString nextice1();
    QString ice1[2]={":/images/ice1.png",":/images/blank.png"};
    int index;
};

#endif // ICE1_CHANGE_H
