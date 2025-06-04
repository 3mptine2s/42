#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb == 1)
	{
		return (1);
	}
	while (nb % div != 0 && div != nb)
	{
		div++;
	}
	if (div == nb)
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	printf("%d",ft_is_prime(42));
}