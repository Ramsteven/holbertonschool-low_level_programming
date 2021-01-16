#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set-  function that adds an element to the hash table.
 * @ht: hash table that
 * @key: key of hash_element
 * @value: value that  we get with the key
 *
 * Return: 1 if it succeded 0 otherwise
 */



int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *tmp;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (!key || !ht)
		return (0);

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	tmp = ht->array[index];

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;


	if (tmp != NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
