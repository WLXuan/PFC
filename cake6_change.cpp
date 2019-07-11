#include "cake6_change.h"

cake6_change::cake6_change()
{

    index=-1;
}

QString cake6_change::nextcake6()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cake6[index]);
}
