#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: Pointer to array if size > 0 and no errors caught, NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **t, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	t = malloc(sizeof(int) * height);
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}

	for (i = 0; i < height; ++i)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(t[i]);
			}
			free(t);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}

	return (t);
}
