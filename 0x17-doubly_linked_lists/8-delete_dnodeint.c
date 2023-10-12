#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: head of the list
 * @index: index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;

	if (*head == NULL)
		return (-1);

	cur = *head;
	while (cur != NULL && index > 0)
		cur = cur->next, index--;

	if (cur == NULL)
		return (-1);

	if (cur->prev == NULL)
	{
		if (cur->next == NULL)
			return (free(cur), 1);
		cur->next->prev = NULL;
		*head = cur->next;
		return (free(cur), 1);
	}

	if (cur->next == NULL)
	{
		cur->prev->next = NULL;
		return (free(cur), 1);
	}

	cur->prev->next = cur->next;
	cur->next->prev = cur->prev;
	return (free(cur), 1);
}
