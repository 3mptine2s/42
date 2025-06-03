#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
    int	res;

	res = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
    if (power > 1)
    {
		res = res * nb;
		power--;
        return (ft_recursive_power(res,power));
    }
}

int main()
{
    int hello = 3;
    printf("%d",ft_recursive_power(hello,9));
}