#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] <= 'z' && str[i] >= 'a'))
        {
            printf("notcap");
            return 0;
        }
        i++;
    }
    printf("nyescap");
    return 1;
}

int main(void)
{
    char test[]="asd";
    ft_str_is_lowercase(test);
}