#include "cake4_change.h"

cake4_change::cake4_change()
{

    index=-1;
}

QString cake4_change::nextcake4()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cake4[index]);
}
