#include <stdlib.h>
#include <stdio.h>

int my_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len = my_abs((end - start)) + 1;
    int *res = malloc(sizeof(int) * len);

    if (!res)
        return (NULL);

    while (i < len)
    {
        res[i] = end;
        if (end >= start) //(end < start) is also correct.//
            end--;
        else
            end++;
        i++;
    }
    return (res);
}

int main()
{
    int start = 5;
    int end = 2;
    int len = abs(end - start) + 1;
    int *arr = ft_rrange(start, end);


    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);  // Free allocated memory
    return (0);
}

