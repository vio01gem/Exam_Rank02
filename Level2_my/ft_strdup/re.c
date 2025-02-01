#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *src)
{
    int i = 0;
    while (src[i])
        i++;
    return (i);

char    *ft_strdup(char *src)
{
    char *dest = malloc(ft_strlen(src) + 1);
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = "\0";
    return (dest);
}

int main(void)
{
    printf("%s\n", ft_strdup("hello"));
    printf("%s", strdup("hello"));
}