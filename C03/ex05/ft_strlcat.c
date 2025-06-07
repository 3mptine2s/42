unsigned int strlen(char *tab)
{
    unsigned int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	return (i);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int    i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = strlen(dest);
    src_size = strlen(src);
	i = 0;
	if (size <= dest_size)
	{
		return (src_size + dest_size);
	}
	while (dest_size + i  <= size - 1 && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
    dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

int main()
{
    char src[] = "test1";
    char dest[] = "test2";

    ft_strlcat(dest,src,4);
}