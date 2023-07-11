#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of chars, and fills it with a specific char
 * @size: size of array
 * @c: array will be filled with this character
 * Return: Pointer to array if size > 0, NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);

	t = malloc(sizeof(char) * size);
	if (t == NULL){
		free(t);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
