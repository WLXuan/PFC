#ifndef ICE3_CHANGE_H
#define ICE3_CHANGE_H
#include <QString>


class ice3_change
{
public:
    ice3_change();
    QString nextice3();
    QString ice3[2]={":/images/ice3.png",":/images/blank.png"};
    int index;
};

#endif // ICE3_CHANGE_H
