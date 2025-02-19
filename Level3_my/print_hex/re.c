#include <unistd.h>

int my_atoi (char *num)
{
    int nbr = 0;
    int i = 0;
    while (num[i])
    {
        nbr = nbr * 10 + num[i] - '0';
        i++;
    }
    return (nbr);
}

void print_hex (int num)
{
    char *n = "0123456789abcdef";
    if (num >= 16)
        print_hex(num/16);
    // n = num % 16 + '0';
    write (1, &n[num % 16], 1);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        int num = my_atoi(av[1]);
        print_hex(num);
    }
    write (1, "\n", 1);
}