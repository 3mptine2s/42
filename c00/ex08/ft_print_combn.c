#include <unistd.h>

// Writes a single character to stdout
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Writes a number as digit characters with leading zeroes
void print_number(int digits[], int n)
{
    for (int i = 0; i < n; i++)
        ft_putchar(digits[i] + '0');
    ft_putchar('\n');
}

// Recursively build and print all unique-digit numbers of length 'n'
void generate_unique(int digits[], int used[], int pos, int n)
{
    if (pos == n)
    {
        print_number(digits, n);
        return;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (!used[i])
        {
            digits[pos] = i;
            used[i] = 1;
            generate_unique(digits, used, pos + 1, n);
            used[i] = 0;
        }
    }
}

int main(void)
{
    int n = 3; // Change this to 1, 2, 3, etc. for different digit lengths

    if (n > 10 || n < 1)
        return 1; // Cannot have more than 10 unique digits or less than 1

    int digits[10] = {0};
    int used[10] = {0};

    generate_unique(digits, used, 0, n);

    return 0;
}
