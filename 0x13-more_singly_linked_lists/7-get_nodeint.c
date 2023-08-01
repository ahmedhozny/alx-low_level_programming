#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: current head of the list
 * @index: index of the node needed
 *
 * Return: pointer to the node found, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = head;

	while (c && index > 0)
	{
		c = c->next;
		index--;
	}

	return (c ? c : NULL);
}
