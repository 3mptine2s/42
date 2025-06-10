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
		neg = -neg;
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
	return (res * neg);
}

#include <stdio.h>

int main(void)
{
	char tes[] = "!@#$++^&qw-ertyuio--p[]sdfghkl;'zxcvbnm,.\n\t/*(  )-1325632167";
	printf("%d",ft_atoi(tes));
}