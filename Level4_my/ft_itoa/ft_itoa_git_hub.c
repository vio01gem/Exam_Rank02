#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
	if(nbr == -2147483648)
		return("-2147483648\0");
	int n = nbr;
	int len = 0;
	if (nbr <= 0)
		len++;
	while (n) 
	{
		n /= 10;
		len++;
	}
	char *result = malloc(len + 1);
	if (result == NULL) 
		return NULL;
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return(result);
	}
	if (nbr < 0) 
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr) 
	{
		len--;
		result[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return result;
}
