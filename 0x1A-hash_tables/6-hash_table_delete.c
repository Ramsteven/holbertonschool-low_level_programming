#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete -function that delete a hash table
 * @ht: ht to delete
 *
 * Return: nothing or NULL if fail
 */

void hash_table_delete(hash_table_t *ht)
{

	unsigned int i;
	hash_node_t *head;

	if (!ht || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head)
		{
			free(head->key);
			free(head->value);
			head = head->next;
			free(ht->array[i]);
			ht->array[i] = head;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
