#include <stdio.h>

void ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    int j;

    i = 0;
    while (i < n && src[i] != '\0' )
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    
    
}

// int main(){
//     char src[] = "hahah";
//     char dest[] = "ajjjjjjjjjjjjjjjjj";
//     int i = 0;

//     // while (i != sizeof(dest)/sizeof(dest[0]))
//     // {
//     //     printf("%c",dest[i]);
//     //     i++;
//     // }
    
//     ft_strncpy(dest,src,100);
//     i=0;
//     while (i != sizeof(dest)/sizeof(dest[0]))
//     {
//         printf("%c",dest[i]);
//         i++;
//     }
// }