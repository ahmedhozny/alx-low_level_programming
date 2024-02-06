#include "search_algos.h"


/**
 * linear_search - searches for given value in an array linearly
 * @array: pointer to first element of the array
 * @size: size of the given array
 * @value: value to search for
 * Return: first index of element location, -1 if array is null or not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
