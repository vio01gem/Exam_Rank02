#include <stdio.h>

int ft_strlen(char *s)
{
    int i;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strrev(char *str)
{
    int start;
    int end;
    char temp;

    start = 0;
    end = ft_strlen(str) - 1;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return(str);
}

int main ()
{
    char s[] = "APPLE";
    printf("%s\n", ft_strrev(s));
}