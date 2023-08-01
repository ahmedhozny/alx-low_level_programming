#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in list in specified index
 * @head: current head of the list
 * @idx: index of the new element
 * @n: number to append
 *
 * Return: pointer to the node created, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *c;
	listint_t *prev = *head;

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);

	c->n = n;
	c->next = NULL;

	if (idx == 0)
	{
		c->next = *head;
		*head = c;
		return (c);
	}

	for (i = 0; prev && i < idx; i++)
	{
		if (i == idx - 1)
		{
			c->next = prev->next;
			prev->next = c;
			return (c);
		}
		else
			prev = prev->next;
	}

	return (NULL);
}
