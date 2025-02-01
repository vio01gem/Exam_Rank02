#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = -1;
    while (s2[++i])
        s1[i] = s2[i];
    return (s1);
}

int main ()
{
    char dest[10] = "kkkkkk";
    char scr[10] = "Hellow";
    printf("%s\n", ft_strcpy(dest, scr));
}