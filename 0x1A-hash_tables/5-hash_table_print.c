#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that creat a hash table.
 * @ht: hash table
 *
 * Print: all elements into the hash table
 * Return: nothing or null if fail
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int count = 0;
	hash_node_t *tmp;

	if (!ht || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			if (count > 0)
				printf(", ");

			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
			count++;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
