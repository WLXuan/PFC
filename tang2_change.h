#ifndef TANG2_CHANGE_H
#define TANG2_CHANGE_H
#include <QString>


class tang2_change
{
public:
    tang2_change();
    QString nexttang2();
    QString tang2[2]={":/images/tang2.png",":/images/blank.png"};
    int index;

};

#endif // TANG2_CHANGE_H
