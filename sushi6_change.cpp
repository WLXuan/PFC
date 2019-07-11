#include "sushi6_change.h"

sushi6_change::sushi6_change()
{

    index=-1;
}

QString sushi6_change::nextsushi6()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(sushi6[index]);
}
