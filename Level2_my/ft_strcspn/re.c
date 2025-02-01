#include <string.h>
#include <stdio.h>

size_t my_strchr(const char *str, char find)
{
    while (*str)
    {
        if (*str == find)
            return(1);
        str++;
    }
    return(0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while (s[i])
    {
        if (my_strchr(reject, s[i]) == 1)
            return (i);
        i++;
    }
    return (i);
}

int main ()
{
    char *str = "hololololo";
    char *X = "s";
    printf ("%zu\n", strcspn(str, X));
    printf ("%zu\n", ft_strcspn(str, X));
    printf("%zu\n", strcspn("Hiworld", "dk"));
    printf("%zu\n", ft_strcspn("Hiworld", "dk"));
}