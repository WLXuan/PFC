#include "ice5_change.h"

ice5_change::ice5_change()
{

    index=-1;
}
QString ice5_change::nextice5()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ice5[index]);
}
