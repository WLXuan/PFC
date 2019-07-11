#ifndef TANG3_CHANGE_H
#define TANG3_CHANGE_H
#include <QString>


class tang3_change
{
public:
    tang3_change();
    QString nexttang3();
    QString tang3[2]={":/images/tang3.png",":/images/blank.png"};
    int index;
};

#endif // TANG3_CHANGE_H
