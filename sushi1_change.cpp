#include "sushi1_change.h"

sushi1_change::sushi1_change()
{

    index=-1;
}
QString sushi1_change::nextsushi1()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(sushi1[index]);
}
