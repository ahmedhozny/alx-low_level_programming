#include <stdlib.h>

/**
 * malloc_checked -allocates memory using malloc
 * @b: malloc result
 * Return: size of memory required
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
