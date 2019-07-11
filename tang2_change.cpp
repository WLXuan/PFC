#include "tang2_change.h"

tang2_change::tang2_change()
{

    index=-1;
}
QString tang2_change::nexttang2()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(tang2[index]);
}
