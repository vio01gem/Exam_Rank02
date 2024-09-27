#include <stdio.h>
#include <string.h>

char *my_strchr(char *s, char find)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == find)
            return (s + i);
        i++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if (my_strchr((char *)accept, s[i]) == 0)
            break;
        i++;
    }
    return (i);
}

int main ()
{

    printf("%zu\n", ft_strspn("hello", "hijoke"));
    printf("%zu\n", strspn("hello", "hijoke"));
}