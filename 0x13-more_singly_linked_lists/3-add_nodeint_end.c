#include "lists.h"

/**
 * add_nodeint_end -adds an element to the end of the list
 * @head: current head of the list
 * @n: number to append
 * Return: pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));

	if (!c)
		return (NULL);

	c->next = NULL;
	c->n = n;

	if (!(*head))
	{
		*head = c;
	}
	else
	{
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = c;
	}

	return (c);
}
