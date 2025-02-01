#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int main ()
{
    char *str1 = "cat";
    char *str2 = "car";
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", ft_strcmp(str1, str2));
}