#include "sushi4_change.h"

sushi4_change::sushi4_change()
{

    index=-1;
}

QString sushi4_change::nextsushi4()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(sushi4[index]);
}
