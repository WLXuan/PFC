#include "ice1_change.h"

ice1_change::ice1_change()
{
    index=-1;

}

QString ice1_change::nextice1()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ice1[index]);
}
