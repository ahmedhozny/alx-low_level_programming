#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: array will be filled with this character
 * Return: Pointer to array if size > 0, NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *t;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);
	for (int i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
