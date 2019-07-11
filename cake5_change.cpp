#include "cake5_change.h"

cake5_change::cake5_change()
{

    index=-1;
}

QString cake5_change::nextcake5()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cake5[index]);
}
