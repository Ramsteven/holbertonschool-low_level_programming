#include "lists.h"

/**
  *listint_len- function that returns the numbers of nodes of list
  *@h: list received
  *
  *Return: numbers o nodes
  **/
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
