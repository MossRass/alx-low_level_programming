#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **t;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		t[x] = malloc(sizeof(int) * width);

		if (t[x] == NULL)
		{
			for (; x >= 0; x--)
				free(t[x]);

			free(t);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			t[x][y] = 0;
	}

	return (t);
}
