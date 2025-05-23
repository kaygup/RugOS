#ifndef STRING_H
#define STRING_H

#include "types.h"

uint16 strlenght(string ch)
{
    uint16 i = 1;
    while(ch[i++]);
    return --i;
}

uint8 strEql(string ch1, string ch2)
{
    uint8 result = 1;
    uint8 size = strlenght(ch1);
    if(size != strlenght(ch2)) result = 0;
    else
    {
        uint8 i = 0;
        for(i;i<=size;i++)
        {
            if(ch1[i] != ch2[i]) result = 0;
        }
    }
    return result;
}

#endif
