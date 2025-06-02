#include <stdio.h>
int ft_atoi(char *str)
{
   int	res;
   int	neg;
   int	i;


   res = 0;
   i = 0;
   neg = 1;
   while (str[i] != '\0')
   {
	if (str[i] == '-')
	{
		neg = neg * -1;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
	}
	i++;
   }
   	printf("%d",res * neg);
	return (res * neg);
}

int main(void)
{
	char tes[] = "----11231";
	ft_atoi(tes);
}