#include <stdio.h>

int ft_sqrt(int nb)
{
    int res;

    res = 0;
    if (nb < 0)
    {
        nb = -nb;
    }
    while (res * res != nb && res != nb)
    {
        res++;
    }
    if (res == nb)
    {
        return (0);
    }
    return (res);
}

// int main(void)
// {
//     int hello = 10;
//     printf("%d",(ft_sqrt(hello)));
// }