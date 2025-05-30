#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

    while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			printf("%d",(s1[i] - s2[i]));
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
//     char s1[] = "hahahahaha";
//     char s2[] = "hahahadhaha";
// 	printf("%s","test");
// 	ft_strcmp(s1,s2);
// }