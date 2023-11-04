#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: string that represents key
 * Return: value found, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	cur = ht->array[index];

	if (cur == NULL)
		return (NULL);

	while (cur)
	{
		if (!strcmp(cur->key, key))
			return (cur->value);
		cur = cur->next;
	}

	return (NULL);
}
