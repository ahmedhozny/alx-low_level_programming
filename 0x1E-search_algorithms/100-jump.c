#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for given value in an array using jump search
 * @array: pointer to first element of the array
 * @size: size of the given array
 * @value: value to search for
 * Return: first index of element, -1 if array is null or value not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, temp;

	if (array == NULL)
		return (-1);

	a = 0, b = sqrt(size);

	while (array[(b < size ? b : size)] < value)
	{
		printf("Value checked array[%li] = [%d]\n", a, array[a]);
		a = b;
		b += sqrt(size);
		if ((size_t) a >= size)
			return (-1);
	}

	printf("Value checked array[%li] = [%d]\n", a, array[a]);
	printf("Value found between indexes [%li] and [%li]\n", a, b);

	temp = b < size ? b : size;
	while (array[a] <= value)
	{
		printf("Value checked array[%li] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		if (a == temp)
			return (-1);
		a++;
	}

	return (-1);
}
