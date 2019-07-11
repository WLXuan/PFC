#include "ice4_change.h"

ice4_change::ice4_change()
{

    index=-1;
}

QString ice4_change::nextice4()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ice4[index]);
}
