#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int		*tab;
	int		i;

	i   = 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
        *range = NULL;
		return (0);
	}
	if (!tab)
	{
        *range = NULL;
		return (-1);
	}
	while (min < max)
	{
		tab[i] = min - i;
		i++;
	}
    *range = tab;
	return (max - min);
}
