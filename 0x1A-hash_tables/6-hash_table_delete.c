#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cur;

	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		if (cur == NULL)
			continue;

		while (cur != NULL)
		{
			free(cur->key), free(cur->value);
			ht->array[i] = cur->next;
			free(cur);
			cur = ht->array[i];
		}
	}

	free(ht->array);
	free(ht);
}
