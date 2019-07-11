#ifndef HAM_CHANGE_H
#define HAM_CHANGE_H
#include <QString>


class ham_change
{
public:
    ham_change();
    QString nextham();
    QString ham[2]={":/images/ham.png",":/images/blank.png"};
    int index;
};

#endif // HAM_CHANGE_H
