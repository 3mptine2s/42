#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return (0);
    }
    if (index == 0)
    {
        return (0);
    }
    if (index == 1)
    {
        return (1);
    }
    return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// int main(void)
// {
//     int hello = 19;
//     printf("%d",ft_fibonacci(hello));
// }