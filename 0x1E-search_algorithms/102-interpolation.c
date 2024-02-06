#include "search_algos.h"

/**
 * interpolation_search - searches for given value in an array
 *                        using interpolation algorithm.
 * @array: pointer to first element of the array
 * @size: size of the given array
 * @value: value to search for
 * Return: first index of element, -1 if array is null or value not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (interpolation_helper(array, value, 0, size - 1));
}

/**
 * interpolation_helper - interpolation algorithm.
 * @array: pointer to first element of the array
 * @value: value to search for
 * @low: current lowest value
 * @high: current highest value
 * Return: index of element, -1 if the value is not found
 */
int interpolation_helper(int *array, int value, size_t low, size_t high)
{
	size_t pos;

	pos = low + (((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));

	if (pos > high)
	{
		printf("Value checked array[%li] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%li] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);

	if (array[pos] < value)
		return (interpolation_helper(array, value, pos + 1, high));

	if (array[pos] > value)
		return (interpolation_helper(array, value, low, pos - 1));

	return (-1);
}
