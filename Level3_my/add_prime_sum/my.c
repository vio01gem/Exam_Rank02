#include <unistd.h>

int atoi(char *str)
{
    int res = 0;
    while(*str)
    {
        res = res * 10 + *str - '0';
        str++;
    }
    return(res);
}
int find_prime(int num)
{
    int i = 2;
    if (num <= 1)
        return (0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return(1);
}
void put_nbr(int n)
{
    if (n >= 10)
        put_nbr(n / 10);
    char num = n % 10 + '0';
    write (1, &num, 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int sum = 0;
        int nbr = atoi(av[1]);

        while (nbr >= 1)
        {
            if (find_prime(nbr) == 1)
                sum += nbr;
            nbr--;
        }
        put_nbr(sum);
    }
    if (ac != 2)
        put_nbr(0);
    write( 1, "\n", 1);
}