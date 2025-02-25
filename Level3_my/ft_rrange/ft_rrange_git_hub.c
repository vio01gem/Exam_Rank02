#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n *= -1);
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return (range);
}

int main()
{
    int start = 1, end = 3;
    int *arr = ft_rrange(start, end);
    int len = abs(end - start) + 1;

    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n");
    free(arr);
    return (0);
}