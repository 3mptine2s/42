#include <stdio.h>
void ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] <= 'z' && str[i] >= 'a'))
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}