#include "lists.h"

/**
 * listint_len -returns the number elements in a list
 * @h: current head of the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
