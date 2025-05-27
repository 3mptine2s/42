#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    char *hex = "0123456789abcdef";

    while (*str)
    {
        if (*str >= 32 && *str <= 126)
        {
            write(1, str, 1);  // just print the character
        }
        else
        {
            char escape[3];

            write(1, "\\", 1); // backslash

            escape[0] = hex[((unsigned char)*str) / 16];
            escape[1] = hex[((unsigned char)*str) % 16];
            escape[2] = '\0';

            write(1, escape, 2); // write 2 hex digits
        }
        str++;
    }
}
