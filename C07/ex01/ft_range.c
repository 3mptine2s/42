#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(int) * max - min);
	if (min >= max)
	{
		return (NULL);
	}
	if (!tab)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
