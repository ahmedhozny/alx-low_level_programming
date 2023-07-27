#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements in list.
 * @h: head of list given
 *
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}