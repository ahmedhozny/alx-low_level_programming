#include "lists.h"

/**
 * pop_listint - pops the head node of a list
 * @head: current head of the list
 *
 * Return: the popped data if available, 0 otherwise
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *c;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	c = (*head)->next;
	free(*head);
	*head = c;

	return (n);
}
