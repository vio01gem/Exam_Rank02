#include <unistd.h>

void to_lower(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            *str += 32;
        str++;
    }
}

int main (int ac, char **av)
{
    int i;
    int j = 1;
    if (ac >= 2)
    {
        while (av[j])
        {
            i = 0;
            while (av[j][i])
            {
                to_lower(av[j]);
                if (((av[j][i] >= 'a' && av[j][i] <= 'z') && (av[j][i + 1] == ' ' || (av[j][i + 1] == '\t')) || ((av[j][i + 1] == '\0') && (av[j][i] >= 'a' && av[j][i] <= 'z'))))
                {
                    char c = av[j][i] -= 32;
                    write(1, &av[j][i], 1);
                    i++;
                    if (av[j][i] == '\0')
                        break;
                }
                write(1, &av[j][i], 1);
                i++;
            }
            j++;
            write (1, "\n", 1);
        }
    }
    else
        write (1, "\n", 1);

}