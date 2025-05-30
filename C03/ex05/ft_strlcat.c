int	getlen(char *tab)
{
	int	i;

	while (tab[i] != '\0')
	{
		i++;
	}
	return (i++);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	dest_len;
	unsigned	int	src_len;
	unsigned	int	i;
	unsigned	int	j;

	dest	=	getlen(dest);
	src		=	getlen(src);
	j		=	0;
	i		=	0;
	if (size <= dest_len)
	return (size + src_len);

	i = dest_len;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// int	main()
// {
// 	char	src[] = "shellea";
// 	char	dest[] = "imdestototo";
// 	ft_strlcat(dest,src,5);
// }