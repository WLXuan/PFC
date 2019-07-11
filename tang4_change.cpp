#include "tang4_change.h"

tang4_change::tang4_change()
{

    index=-1;
}
QString tang4_change::nexttang4()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(tang4[index]);
}
