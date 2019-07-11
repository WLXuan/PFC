#ifndef TANG6_CHANGE_H
#define TANG6_CHANGE_H
#include <QString>

class tang6_change
{
public:
    tang6_change();
    QString nexttang6();
    QString tang6[2]={":/images/tang6.png",":/images/blank.png"};
    int index;
};

#endif // TANG6_CHANGE_H
