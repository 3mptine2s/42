#include <unistd.h>
#include <stdio.h>

void	putstr(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		write(1,&tab[i],1);
		i++;
	}
	write(1,"\n",1);
}

void swap(char **c1, char **c2)
{
	char	*temp;

	temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int strcmpr(char *c1, char *c2)
{
	int	i;

	i = 0;
	while (c1[i] == c2[i] && c1[i])
	{
		i++;
	}
	return (c1[i] - c2[i]);
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = 1;
			while (j < argc - i)
			{
				if (strcmpr(argv[j], argv[j + 1]) > 0)
				{
					swap(&argv[j], &argv[j + 1]);
				}
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		putstr(argv[i]);
		i++;
	}
	return (0);
}
