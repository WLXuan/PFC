#include "cake3_change.h"

cake3_change::cake3_change()
{

    index=-1;
}

QString cake3_change::nextcake3()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cake3[index]);
}
