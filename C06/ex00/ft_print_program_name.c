#include <unistd.h>
#include <stdio.h>

void    putstr(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		write(1,&tab[i],1);
		i++;
	}
}

int	main(int argc,char **argv)
{
	if (argv[0])
	{
		printf("%d",argc);
		putstr(argv[0]);	
	}
}