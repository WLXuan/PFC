#include "tang6_change.h"

tang6_change::tang6_change()
{

index=-1;
}
QString tang6_change::nexttang6()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(tang6[index]);
}
