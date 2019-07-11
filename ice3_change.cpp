#include "ice3_change.h"

ice3_change::ice3_change()
{

    index=-1;
}
QString ice3_change::nextice3()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ice3[index]);
}
