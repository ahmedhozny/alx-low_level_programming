#include "lists.h"

/**
 * free_listint2 -frees listint_t from memory
 * @head: current head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *c;

	while (*head)
	{
		c = (*head)->next;
		free(*head);
		*head = c;
	}
}
