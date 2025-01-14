#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int max;
    unsigned int i = 0;

    if (len == 0)
        return(0);
    max = tab[i];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return(max);
}

int main ()
{
    int tab[] = {169, 267, 580, 915, 345};
    printf("%d\n", max(tab, 5));
}