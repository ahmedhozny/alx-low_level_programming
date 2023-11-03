#include "hash_tables.h"

/**
 * key_index - function that takes key and table size and gets associated index
 * @key: string that represents key
 * @size: size of the hash table
 * Return: returns index of the key according to its hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
