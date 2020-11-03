#include "lists.h"

/**
  *
  *
  *
  *
  **/
size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h)
	{
		printf("%d \n",h->n);
		i++;
		h = h->next;
	}

	return (i);
}
