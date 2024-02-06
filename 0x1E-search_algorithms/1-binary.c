#include "search_algos.h"


/**
 * binary_search - searches for given value in an array using binary search
 * @array: pointer to first element of the array
 * @size: size of the given array
 * @value: value to search for
 * Return: first index of element location, -1 if array is null or not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, temp;

	if (array == NULL)
		return (-1);

	l = 0, r = size - 1;
	while (l < r)
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			for (temp = l; temp < r; temp++)
				printf("%d, ", array[temp]);
			printf("%d\n", array[r]);

			temp = (l + r) / 2;
			if (array[temp] == value)
				return (temp);
			else if (array[temp] > value)
				r = temp - 1;
			else if (array[temp] < value)
				l = temp + 1;
		}
	}
	return (-1);
}
