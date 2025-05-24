#include <unistd.h>
#include <stdio.h>

int printer(int one, int two)
{
	if (one == 98 && two == 99)
	{
		printf("%d",one);
		printf("%s"," ");
		printf("%d",two);
		return 0;
	}
    if (one < 10)
    {
		printf("%s","0");
		printf("%d",one);
		printf("%s"," ");
        if (two < 10)
        {
			printf("%s","0");
			printf("%d",two);
			printf("%s",", ");
            return	0;
        }
        else
        {
			printf("%d",two);
			printf("%s",", ");
        }
		return	0;
           
    }
	printf("%d",one);
	printf("%s"," ");

	if (two < 10)
	{
		printf("%s","0");
		printf("%d",two);
		printf("%s",", ");
		return	0;
	}
	else
	{
		printf("%d",two);
		printf("%s",", ");
	}
	
}


int main(void)
{
    int one = 0;
    int two = 0;

    while (one <= 98)
    {
        two = 0;
        while (two <= 99)
        {
            if (one == two)
            {
                two++;
                continue; 
            }
            printer(one, two);
            two++;
        }
        one++;
    }

    return 0;
}