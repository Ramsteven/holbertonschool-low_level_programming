#include "lists.h"

/**
  *print_listint- print list
  *@h: list received
  *
  *Return: size of the list
  **/
size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h)
	{
		printf("%d \n", h->n);
		i++;
		h = h->next;
	}

	if (!h)
		return (0);

	return (i);
}
