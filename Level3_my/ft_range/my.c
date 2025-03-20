#include <stdlib.h>
#include <stdio.h>

int my_abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}


int     *ft_range(int start, int end)
{
    int i = 0;
    int len = my_abs((end - start)) + 1;
    int *res = malloc(sizeof(int) * len);

    if (!res)
        return (NULL);

    while (i < len)
    {
        res[i] = start;
        if (start <= end) //(start < end) is also correct.//
            start++;
        else
            start--;
        i++;
    }
    return (res);
}

int main()
{
    int start = -1, end = 7;
    int *arr = ft_range(start, end);
    int len = abs(end - start) + 1;

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n");
    free(arr);
    return (0);
}