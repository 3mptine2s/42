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

int	ft_find_next_prime(int nb)
{
	int	can;

	can = nb + 1;
	while (!(ft_is_prime(can)))
	{
		can++;
	}
	return (can);
}

int	main()
{
	printf("%d",ft_find_next_prime(12541));
}