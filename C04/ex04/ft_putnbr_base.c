#include <unistd.h>
#include <stdio.h>

void	counter(int *len, char *base)
{
	int	i;
	int	j;
	int res;

	*len = 0;
	i = 0;
	j = 0;
	res = 1;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return;
	}
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return;
		}
		j = i + 1;
		while(base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return;
			}
			j++;
		}
		i++;
	}
	*len = i;
}

void wrte(char c)
{
	write(1,&c,1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		len;
	long	nb;

	nb = nbr;
	counter(&len,base);
	if (len < 2)
	{
		return;
	}
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;	
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len,base);
	}
	wrte(base[nb % len]);
}

int main(void)
{
	int hi = 3041230;
	char base[] = "0123456789abcdef";
	ft_putnbr_base(hi,base);
}