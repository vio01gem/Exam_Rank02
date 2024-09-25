#include <unistd.h>

int ft_atoi(char *nbr)
{
    int res = 0;
    while (*nbr)
    {
        res = res * 10 + *nbr - 48;
        nbr++;
    }
    return (res);
}

void ft_putnbr (int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    char c = num % 10 + 48;
    write (1, &c, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int i = 1;
        int nbr = ft_atoi(av[1]);
        while (i <= 9 && nbr <= 238609294)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n ", 1);
            i++;
        }
    }
    else
        write(1, "\n ", 1);
}
