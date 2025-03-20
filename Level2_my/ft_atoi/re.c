 #include <stdlib.h>
 #include <stdio.h>

int	ft_atoi(const char *str)
{
    int sign = 1;
    int num = 0;
    int i = 0;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - '0';
        i++;
    }
    return (num * sign);
}

int main(void)
{
    char str1[] = "-1+1234";
    char str2[] = "  -98-7";
    char str3[] = "429-";
    char str4[] = "hello123";

    printf("%d\n", atoi(str1)); 
    printf("%d\n", ft_atoi(str1)); 
    printf("%d\n", atoi(str2)); 
    printf("%d\n", ft_atoi(str2)); 
    printf("%d\n", atoi(str3)); 
    printf("%d\n", ft_atoi(str3)); 
    printf("%d\n", atoi(str4));
    printf("%d\n", ft_atoi(str4));
}