#include "sushi2_change.h"

sushi2_change::sushi2_change()
{

    index=-1;
}
QString sushi2_change::nextsushi2()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(sushi2[index]);
}
