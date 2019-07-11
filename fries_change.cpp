#include "fries_change.h"
fries_change::fries_change()
{
    index=-1;
}

QString fries_change::nextfries()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(fries[index]);
}
