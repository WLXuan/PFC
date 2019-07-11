#include "san_change.h"

san_change::san_change()
{

    index=-1;
}

QString san_change::nextsan()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(san[index]);
}
