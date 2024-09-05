#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 7;
    ft_swap(&a, &b);
    printf("%d, %d\n", a, b);
}