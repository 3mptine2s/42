#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
void error()
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}
int	ftstrlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	if (i > 39)
	{
		return (0);
	}
	return (i);
}
int	main(int argc, char **argv)
{
	int	fd;
	int	i;
	char hello[] = "1000000000000000000000000000001210000000";

	i = 0;
	if (argc = 2)
	{
		printf("%c",argv[1][1]);
	}
	// if (!(ftstrlen(hello)))
	// {
	// 	error();
	// 	return (0);
	// }
}