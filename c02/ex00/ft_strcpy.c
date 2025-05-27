
#include <stdio.h>

void ft_strcpy(char *dest, char *src)
{
    int i;
    i=0;
    while (src[i] != '\0')
    {
     dest[i] = src[i];   
     i++;
    }
}

int main()
{
    int i;
    char hello[]="helloalallala";
    char dest[]="helloimdest";
    ft_strcpy(dest,hello);
    i=0;
    while (i != sizeof(dest)/sizeof(dest[0]))
    {
        printf("%s",dest[i]);
        i++;
    }
}

// int main()
// {
//     int i =0;
//     char dest[]= "hahahahahahahahaahaahaha";
//     while (i != sizeof(dest)/sizeof(dest[0]))
//     {
//         printf("%c",dest[i]);
//         i++;
//     }
// }