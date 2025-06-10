#include <stdio.h>

int	putlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

int ft_iterative_power(int nb, int power)
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
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int strfind(char c, char *tab)
{
	int i;
	while (tab[i] && c != tab[i])
	{
		i++;
	}
	return (i);
}

int ft_atoi_base(char *str, char *base)
{
	int numlen;
	int baselen;
	int	res;
	int	i;

	res = 0;
	baselen = putlen(base);
	numlen = putlen(str);
	while (i < numlen)
	{
		res += strfind(str[i], base) * (ft_iterative_power(baselen, i));
		i++;
	}
	printf("%d", res);
}

int main()
{
	ft_atoi_base("15","0123456789");
}