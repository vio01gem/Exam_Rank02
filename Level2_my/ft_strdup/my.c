#include <stdio.h>
#include <string.h>

int ft_strlen(char *s)
{
    int i;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    dest = malloc (ft_strlen(src) + 1);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

    int main(void)
    {
        printf("%s\n", ft_strdup("hello"));
        printf("%s", strdup("hello"));
    }