#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int srcsize;
    int i;
    
    i = 0;
    srcsize = 0;
    if (size > 0)
    {
        while (i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        
    }
    while (src[srcsize])
    {
        srcsize++;
    }
    return srcsize;
}