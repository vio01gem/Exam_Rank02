#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    if (!*s1 || !*s2)
        return(NULL);

}

int main(void)
{
    printf("%s\n", ft_strpbrk("hiWorld", "Wj")); 
    printf("%s\n", strpbrk("hiWorld", "Wj"));
}