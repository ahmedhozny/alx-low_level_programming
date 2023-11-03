#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element to the hash table
 * @ht: pointer to hash table
 * @key: string that represents key
 * @value: string to be set
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *cur, *new;
	char *str;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	str = strdup(value);
	if (str == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	cur = ht->array[index];

	while (cur != NULL && cur->next != NULL)
	{
		if (!strcmp(cur->key, key))
		{
			free(cur->value);
			cur->value = str;
			return (1);
		}
		cur = cur->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (free(str), 0);

	new->key = strdup(key);
	if (new->key == NULL)
		return (free(new), free(str), 0);
	new->value = str;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
