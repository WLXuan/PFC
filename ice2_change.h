#ifndef ICE2_CHANGE_H
#define ICE2_CHANGE_H
#include <QString>


class ice2_change
{
public:
    ice2_change();
    QString nextice2();
    QString ice2[2]={":/images/ice2.png",":/images/blank.png"};
    int index;
};

#endif // ICE2_CHANGE_H
