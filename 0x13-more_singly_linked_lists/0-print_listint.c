#include "lists.h"

/**
  *print_listint- print list
  *@h: list received
  *
  *Return: size of the list
  **/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (i);

	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
