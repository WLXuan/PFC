#include "ice2_change.h"

ice2_change::ice2_change()
{

index=-1;
}

QString ice2_change::nextice2()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ice2[index]);
}
