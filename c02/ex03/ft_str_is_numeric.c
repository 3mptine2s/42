#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] <= '9' && str[i] >= '0'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    char test[]="";
    ft_str_is_numeric(test);
}