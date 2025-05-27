#include <stdio.h>

void ft_strcapitalize(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i-1] >= 'A' && str[i-1] <= 'Z' && (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
        {
            j = i;
            while (!(str[j] >= 32 && str[j] <= 47))
            {
                if (str[j] >= 'A' && str[j] <= 'Z')
                {
                str[j] = str[j] + 32;
                }
                j++;
            }
        }
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        
        if (str[i-1] >= 32 && str[i-1] <= 47 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main()
{
    char test[] = "hi, how are you? 42words forty-two; fifty+and+one";
    ft_strcapitalize(test);
    printf("%s",test);
}