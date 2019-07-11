#include "ice6_change.h"

ice6_change::ice6_change()
{

    index=-1;
}
QString ice6_change::nextice6()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ice6[index]);
}
