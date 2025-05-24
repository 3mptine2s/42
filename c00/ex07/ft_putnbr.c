#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nbr)
{
    if (nbr > __INT_MAX__)
    {
    }
    if (nbr < __WINT_MIN__)
    {
    }
    
}

int main(void)
{
    int max = 2147483647;
    int min = -2147483647;
    printf("%d",max);
    printf("%d",min);
}