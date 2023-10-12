#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index where the new node should be added
 * @n: number to be stored in the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur, *temp;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	cur = *h;
	while (cur->next != NULL && idx > 0)
		cur = cur->next, idx--;

	if (idx == 1 && cur->next == NULL)
		return (add_dnodeint_end(&cur, n));
	if (idx != 0)
		return (NULL);

	temp = cur->prev;
	temp->next = add_dnodeint(&cur, n);
	temp->next->prev = temp;

	return (temp->next);
}
