#include <stdio.c>

void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    printf("%s\n", ft_swap("2", "7"));
}