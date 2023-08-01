#include "lists.h"

/**
 * delete_nodeint_at_index -deletes the node at index index of a list
 * @head: current head of the list
 * @index: index of the note to be removed
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *c = *head;
	listint_t *to_delete = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	while (i < index - 1)
	{
		if (!c || !(c->next))
			return (-1);
		c = c->next;
		i++;
	}

	to_delete = c->next;
	c->next = to_delete->next;
	free(to_delete);

	return (1);
}
