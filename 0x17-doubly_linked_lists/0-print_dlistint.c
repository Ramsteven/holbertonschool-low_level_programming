#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint- function that print a n int hold inside of a dblinkedlist
 *@h: head of list
 *Return: amount of nodes of the list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h->next && !h->prev || !h)
		return (0);

	while (h)
	{
		printf("%u\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
