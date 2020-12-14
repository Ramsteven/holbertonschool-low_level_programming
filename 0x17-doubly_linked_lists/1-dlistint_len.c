#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len- function that print the numbers of nodes of a list h
 *@h: head of list
 *Return: amount of nodes of the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
