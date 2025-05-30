#include <stdio.h>
int ft_atoi(char *str)
{
   int	res;
   int	neg;
   int	i;

   neg = 1;
   while (str[i] != '\0')
   {
	if (str[i] == '-')
	{
		neg = neg * -1;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		res	= res * 10 + (str[i] - '0');
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			return (res * neg); 
		}
	}
	i++;
   }
}

// int main(void)
// {
// 	char tes[] = "--1231151516";
// 	ft_atoi(tes);
// }