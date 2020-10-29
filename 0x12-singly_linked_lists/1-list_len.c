#include "lists.h"
/**
  *list lenght- return numbers of elements of the list
  *@h: list received
  *
  * Return: number of nodes
  **/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
