#include <stdlib.h>
#include <unistd.h>

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

int cmpr(char str, char *sep)
{
	int i;
	int	j;
	i = 0;

	while (sep[i])
	{
		if (str == sep[i])
		{
			return (2);
		}
	}
	return (0);
}

void putstr(char *tab)
{
	int	i;

	while (tab[i])
	{
		write(1, &tab[i], 1);	
	}
}
char **ft_split(char *str, char *charset)
{
	char **res;
	int		i;
	int		k;
	int		j;

	j = 0;
	i = 0;
	k = 0;
	res = malloc(sizeof(char) * getlen(str));
	while (str[i])
	{
		if (cmpr(str[i], charset) == 2)
			j++;
		res[j][k] = str[i];
		k++;
		i++;
	}
	
}

int	main()
{
	char	hello[] = "ASD CNA ASD GAFA TAER";
	char	sep[] = " ";

}