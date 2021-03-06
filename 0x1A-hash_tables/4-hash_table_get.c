#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that creat a hash table.
 * @ht: hash table
 * @key: key of element inside of hash_table
 *
 * Return: value with the key gives otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index = 0;



	if (!ht || ht->array == NULL || strlen(key) == 0 || !key || ht->size == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
