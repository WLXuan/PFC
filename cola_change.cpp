#include "cola_change.h"

cola_change::cola_change()
{

    index=-1;
}

QString cola_change::nextcola()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(cola[index]);
}
