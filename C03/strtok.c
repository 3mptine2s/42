#include <unistd.h>

char *sttok(char *tab, char *splitter)
{
	int	i;

	i = 0;
    while (tab[i] != '\0')
    {
		write(1,&tab[i],1);
		if (tab[i] == splitter[0])
		{
			tab[i] = '\0';
			write(1,"\n",1);
		}
		i++;
    }
    
}

int main(void)
{
    char test[] = "hi hello yes";
	char split[] = " ";
	sttok(test,split);
}