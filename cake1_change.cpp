#include "cake1_change.h"

cake1_change::cake1_change()
{

    index=-1;
}

QString cake1_change::nextcake1()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cake1[index]);
}
