 #include <stdlib.h>
 #include <stdio.h>

int	ft_atoi(const char *str)
{
    int  sign = 1;
    int num = 0;
    while (*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }    
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + *str - '0';
        str++;
    }
    return (num * sign);
}
int main(void)
{
    char str1[] = "1234";
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