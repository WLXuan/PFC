#ifndef TANG4_CHANGE_H
#define TANG4_CHANGE_H
#include <QString>

class tang4_change
{
public:
    tang4_change();
    QString nexttang4();
    QString tang4[2]={":/images/tang4.png",":/images/blank.png"};
    int index;
};

#endif // TANG4_CHANGE_H
