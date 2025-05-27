#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab,int size){
    int i;
    int j;
    int preva;

    for (i = 0; i < size; i++)
    {
        j = 0;
        for ( j = 0; j < size - i - 1 ; j++)
        {
            if (tab[j] > tab[j+1])
            {
                preva = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = preva; 
            }
        }
    }
}

int main()
{
    int nums[]={4,2,1,3,5,6,2,6};
    int size = sizeof(nums) / sizeof(nums[0]);
    ft_sort_int_tab(nums,size);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d",nums[i]);
    }
}