#ifndef HOT_CHANGE_H
#define HOT_CHANGE_H
#include <QString>


class hot_change
{
public:
    hot_change();
    QString nexthot();
    QString hot[2]={":/images/hot.png",":/images/blank.png"};
    int index;
};

#endif // HOT_CHANGE_H
