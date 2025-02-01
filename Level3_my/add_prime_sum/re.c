#include <unistd.h>

int ft_atoi(char *nbr)
{
    int res = 0;
    while (*nbr)
    {
        res = res * 10 + *nbr - '0';
        nbr++;
    }
    return (res);
}

void ft_putnbr(int num)
{
    if (num >= 10)
        ft_putnbr(num / 10);
    char nbr = num % 10 + '0';
    write(1, &nbr, 1);
}

int find_prime (int nbr)
{
    int i = 2;
    if (nbr <= 1)
        return (0);
    while (i * i <= nbr)
    {
        if (nbr % i == 0) 
            return (0);
        i++;
    }
    return (1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        int sum = 0;

        while (nbr >= 1)
        {
            if (find_prime(nbr) == 1)
                sum += nbr;
            nbr--;
        }
        ft_putnbr(sum);
        write(1, "\n", 1);
    }
    else if (ac <= 1)
    {
        ft_putnbr(0);
        write(1, "\n", 1);
    }
}