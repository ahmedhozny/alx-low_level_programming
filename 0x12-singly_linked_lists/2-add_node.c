#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -adds a new node at the beginning of a list_t list
 * @head: A pointer the head of the list.
 * @str: The string to be added to the list.
 * Return:
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
