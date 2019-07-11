#ifndef TANG5_CHANGE_H
#define TANG5_CHANGE_H
#include <QString>

class tang5_change
{
public:
    tang5_change();
    QString nexttang5();
    QString tang5[2]={":/images/tang5.png",":/images/blank.png"};
    int index;
};

#endif // TANG5_CHANGE_H
