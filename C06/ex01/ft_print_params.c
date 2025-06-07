#include <unistd.h>

void    (char *tab)
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
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			putstr(argv[i]);
			i++;
		}
		
	}
}
