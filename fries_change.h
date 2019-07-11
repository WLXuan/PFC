#ifndef FRIES_CHANGE_H
#define FRIES_CHANGE_H
#include <QString>


class fries_change
{
public:
    fries_change();
    QString nextfries();
    QString fries[2]={":/images/fries.png",":/images/blank.png"};
    int index;
};

#endif // FRIES_CHANGE_H
