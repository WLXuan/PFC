#include "sushi3_change.h"

sushi3_change::sushi3_change()
{

    index=-1;
}

QString sushi3_change::nextsushi3()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(sushi3[index]);
}
