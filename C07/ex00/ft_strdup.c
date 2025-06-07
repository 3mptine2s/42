#include <stdlib.h>

int	getlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

void strcpyr(char *src, char *dest)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

char *ft_strdup(char *src)
{
    char *dup;

    dup = malloc((getlen(src) + 1) * sizeof(char));
	strcpyr(src,dup);
	return (dup);
}