#include <stdlib.h>

/**
 * _calloc -allocates memory for an array
 * @nmemb: number of element
 * @size: size in bytes of the elements
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (!(nmemb && size))
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
