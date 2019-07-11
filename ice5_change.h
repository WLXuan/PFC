#ifndef ICE5_CHANGE_H
#define ICE5_CHANGE_H
#include <QString>

class ice5_change
{
public:
    ice5_change();
    QString nextice5();
    QString ice5[2]={":/images/ice5.png",":/images/blank.png"};
    int index;
};

#endif // ICE5_CHANGE_H
