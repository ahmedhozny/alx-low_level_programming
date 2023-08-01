#include "lists.h"
#include <stdio.h>

/**
 * print_listint -prints the given list and returns the number of its elements
 * @h: current head of the list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
