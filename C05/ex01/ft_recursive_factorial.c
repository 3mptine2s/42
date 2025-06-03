#include <stdio.h>

int factorial(int n)
{
    if (n < 0)
	{
        return -1;
	}
    if (n == 0)
	{
        return 1;
	}   
    return (n * factorial(n - 1));  
}

int main()
{
    int num = 3;
    int result = factorial(num);
	printf("%d",result);
}
