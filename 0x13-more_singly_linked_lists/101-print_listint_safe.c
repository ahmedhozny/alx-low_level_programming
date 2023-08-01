#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe -prints a list with a loop safely
 * @head: current head of the list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n, *l_n;
	size_t counter, new_n;

	tmp_n = l_n = head;
	counter = new_n = 0;

	while (tmp_n != NULL)
	{
		while (counter > new_n)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}
			new_n++;
			l_n = l_n->next;
		}

		l_n = head;
		new_n = 0;
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
	}

	return (counter);
}
