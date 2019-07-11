#ifndef ICE6_CHANGE_H
#define ICE6_CHANGE_H
#include <QString>

class ice6_change
{
public:
    ice6_change();
    QString nextice6();
    QString ice6[2]={":/images/ice6.png",":/images/blank.png"};
    int index;
};

#endif // ICE6_CHANGE_H
