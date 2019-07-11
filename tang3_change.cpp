#include "tang3_change.h"

tang3_change::tang3_change()
{

    index=-1;
}
QString tang3_change::nexttang3()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(tang3[index]);
}
