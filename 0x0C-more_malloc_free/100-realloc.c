#include <stdlib.h>

/**
 * _realloc -reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *oldp;
	unsigned int i, n;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	n = new_size > old_size ? new_size : old_size;

	oldp = p;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);

	return (p);
}
