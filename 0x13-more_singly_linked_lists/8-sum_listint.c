#include "lists.h"

/**
  *sum_listint-function that returns the sum all data
  *@head: list received
  *
  *Return- the sum all data inside the list
  **/
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *h;

	h = head;

	while (h)
	{
		i += h->n;
		h = h->next;
	}

	return (i);
}
