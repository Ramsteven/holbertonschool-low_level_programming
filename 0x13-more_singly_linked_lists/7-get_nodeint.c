#include "lists.h"

/**
  *get_nodeint_at_index-function that returns the sum all data
  *@head: list received
  *@index: index to get
  *
  *Return:the sum all data inside the list
  **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *h;

	h = head;

	while (i++ < index)
	{
		if (!h)
			return (NULL);
		h = h->next;
	}

	return (h);
}
