#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *cur;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		if (cur == NULL)
			continue;
		while (cur != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", cur->key, cur->value);
			cur = cur->next, flag = 1;
		}
	}

	printf("}\n");
}
