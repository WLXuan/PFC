#ifndef SAN_CHANGE_H
#define SAN_CHANGE_H
#include <QString>

class san_change
{
public:
    san_change();
    QString nextsan();
    QString san[2]={":/images/san.png",":/images/blank.png"};
    int index;
};

#endif // SAN_CHANGE_H
