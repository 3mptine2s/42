#include <unistd.h>
int	counetr(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1,"Error\n",6);
        return;        
    }
}