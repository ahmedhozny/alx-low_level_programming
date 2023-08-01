#include "lists.h"

/**
 * free_listint -frees listint_t from memory
 * @head: current head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	while (head)
	{
		c = head->next;
		free(head);
		head = c;
	}
}
