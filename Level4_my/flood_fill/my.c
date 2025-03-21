#include "flood_fill.h"


void	fill(char **tab, t_point size, int x, int y, char to_fill)
{
	if (x < 0 || x >= size.x || y < 0 || y >= size.y || tab[y][x] != to_fill)
		return;

	tab[y][x] = 'F'; // Mark as filled

	// Recursive calls for all four directions
	fill(tab, size, x - 1, y, to_fill);
	fill(tab, size, x + 1, y, to_fill);
	fill(tab, size, x, y - 1, to_fill);
	fill(tab, size, x, y + 1, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char to_fill = tab[begin.y][begin.x];  // Store target character
	if (to_fill != 'F') // Avoid infinite loops if it's already filled
		fill(tab, size, begin.x, begin.y, to_fill);
}

// #include <stdlib.h>
// #include <stdio.h>

// char** make_area(char** zone, t_point size)
// {
// 	char** new;

// 	new = malloc(sizeof(char*) * size.y);
// 	for (int i = 0; i < size.y; ++i)
// 	{
// 		new[i] = malloc(size.x + 1);
// 		for (int j = 0; j < size.x; ++j)
// 			new[i][j] = zone[i][j];
// 		new[i][size.x] = '\0';
// 	}

// 	return new;
// }

// int main(void)
// {
// 	t_point size = {8, 5};
// 	char *zone[] = {
// 		"11111111",
// 		"10001001",
// 		"10010001",
// 		"10110001",
// 		"11100001",
// 	};

// 	char**  area = make_area(zone, size);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	printf("\n");

// 	t_point begin = {7, 4};
// 	flood_fill(area, size, begin);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	return (0);
// }
