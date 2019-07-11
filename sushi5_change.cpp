#include "sushi5_change.h"

sushi5_change::sushi5_change()
{

    index=-1;
}
QString sushi5_change::nextsushi5()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(sushi5[index]);
}
