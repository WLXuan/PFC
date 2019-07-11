#include "tang1_change.h"

tang1_change::tang1_change()
{

    index=-1;
}

QString tang1_change::nexttang1()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(tang1[index]);
}
