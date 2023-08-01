#include "lists.h"

/**
 * reverse_listint -reverses a given list
 * @head: current head of the list
 * Return: pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *c;

	if (*head == NULL)
		return (NULL);

	if ((*(head))->next == NULL)
		return (*head);

	old = *head;
	*head = NULL;

	while (old != NULL)
	{
		c = old->next;
		old->next = *head;
		*head = old;
		old = c;
	}

	return (*head);
}
