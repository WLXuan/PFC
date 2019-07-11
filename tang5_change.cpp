#include "tang5_change.h"

tang5_change::tang5_change()
{

    index=-1;
}

QString tang5_change::nexttang5()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(tang5[index]);
}
