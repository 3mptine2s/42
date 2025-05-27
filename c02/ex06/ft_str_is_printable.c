#include <stdio.h>
int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] <= 127 && str[i] >= 37))
        {
            printf("not");
            return 0;
        }
        i++;
    }
    printf("yes");
    return 1;
}

int main(void)
{
    char test[]="±";
    ft_str_is_printable(test);
}