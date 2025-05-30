char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] = '\0')
	{
		return ('\0');
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j]);
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
	}
	return ('\0');
}

// int	main()
// {
// 	char find[] = "hehehe";
// 	char str[] = "uhhh hehehe";
// 	ft_strstr(str,find);
// }