#include <unistd.h>

void ft_putstr(char *str)
{
    int i;

    while (str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
}

// int main()
// {
//     char ha[] = "ASDASDASD";
//     write(1,"A",1);
//     ft_putstr(ha);
// }