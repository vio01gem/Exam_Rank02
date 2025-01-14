#include <unistd.h>

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    write (1, &"0123456789"[num % 10], 1);
}

int main (int ac, char **av)
{
    (void)av;
    ft_putnbr(ac - 1);
    write (1, "\n ", 1);
}