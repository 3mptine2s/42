void ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] <= 'Z' && str[i] >= 'A'))
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}