#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: Address of the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
		head = head->next, index--;
	return (head);
}
