#include "ham_change.h"

ham_change::ham_change()
{

    index=-1;
}

QString ham_change::nextham()
{
    if(index>=1)
        index=0;
    else
        index++;
    return(ham[index]);
}
