#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if(reject[j] == s[i])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main ()
{
    printf("%zu\n", strcspn("Hiworld", "dok"));
    printf("%zu\n", ft_strcspn("Hiworld", " dok"));
}