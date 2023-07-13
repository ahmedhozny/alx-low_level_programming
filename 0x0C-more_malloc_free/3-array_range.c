#include <stdlib.h>

/**
 * array_range -allocates memory for an array
 * @min: number of element
 * @max: size in bytes of the elements
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min; ++i)
		p[i] = min + i;

	return (p);
}
