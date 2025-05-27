#include <stdio.h>
int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] <= 'z' && str[i] >= 'a' && str[i] <= 'Z' && str[i] >= 'A'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

// int main()
// {
//     char test[]="";
//     ft_str_is_alpha(test);
// }