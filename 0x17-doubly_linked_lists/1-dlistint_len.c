#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a list
 * @h: head of the list
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
		h = h->next, n++;

	return (n);
}
