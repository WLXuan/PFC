#include "hot_change.h"

hot_change::hot_change()
{
    index=-1;

}

QString hot_change::nexthot()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(hot[index]);
}
