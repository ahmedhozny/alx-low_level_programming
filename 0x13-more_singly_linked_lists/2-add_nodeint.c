#include "lists.h"

/**
 * add_nodeint -adds an element to the beginning of the list
 * @head: current head of the list
 * @n: number to append
 * Return: pointer to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c;

	c = malloc(sizeof(listint_t));

	if (!c)
		return (NULL);

	c->next = *head;
	c->n = n;
	*head = c;

	return (c);
}
