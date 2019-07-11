#include "cake2_change.h"

cake2_change::cake2_change()
{

    index=-1;
}

QString cake2_change::nextcake2()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cake2[index]);
}
