#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
        return -1;
	}
    if (power == 0)
	{
        return 1;
	}   
    return (nb * ft_recursive_power(nb,power - 1));
}

// int main(void)
// {
//     int hello = 3;
//     printf("%d",ft_recursive_power(hello,7));
// }