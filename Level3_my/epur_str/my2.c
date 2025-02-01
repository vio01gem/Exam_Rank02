#include <unistd.h>
// I am not sure if it work with grademe, or in every cases 

void epur_str(char *str)
{
    int i = 0;

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    while(str[i])
    {
        while ((str[i] != ' ' && str[i] != '\t'))
            write(1 , &str[i++], 1);
        while ((str[i] == ' ' || str[i] == '\t'))
            i++;
        if (str[i] == '\0')
            break;
        else
        {
            write(1, " ", 1);
        }
        while((str[i] == ' ' || str[i] == '\t'))
            i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        epur_str(av[1]);
    }
    write(1, "\n", 1);
}
