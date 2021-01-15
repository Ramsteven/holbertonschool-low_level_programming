#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creat a hash table.
 * @size: size of array
 *
 * Return: hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->array = malloc(sizeof(hash_table_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	table->size = size;

	return (table);
}
