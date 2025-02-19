#include <unistd.h>

void to_lower (char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i]+= 32;
        i++;
    }
}

int main (int ac, char **av)
{
    int j = 1;
    int i;

    if (ac >= 2)
    {
        while (av[j])
        {
            to_lower(av[j]);
            i = 0;
            while (av[j][i])
            {
                if (i == 0 && (av[j][i] >= 'a' && av[j][i] <= 'z') || ((av[j][i - 1] == ' ' || av[j][i - 1] == '\t') && (av[j][i] >= 'a' && av[j][i] <= 'z')))
                    av[j][i] -= 32;
                write (1, &av[j][i], 1);
                i++;
            }
            j++;
            write (1, "\n", 1); 
        }
    }
    else 
        write (1, "\n", 1);
}                                                                                         