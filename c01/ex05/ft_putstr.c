#include <unistd.h>
#include <stdio.h>
void ft_putstr(char *str)
{
    printf("%s",*str);
}

int main(void)
{
    char on = 'h';
    ft_putstr(&on);
}