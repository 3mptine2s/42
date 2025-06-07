#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (argc > 1 && i > 0)
	{
		putstr(argv[i]);
		i--;	
	}
}