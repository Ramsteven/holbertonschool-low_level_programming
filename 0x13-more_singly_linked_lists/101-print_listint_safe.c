#include "lists.h"
/**
  *print_listint_safe- print list with loop
  *@head: list received
  *
  *Return: numbers of nodes
  **/
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	int result = 0;

	while (head)
	{
		result = head - head->next;
		i++;
		printf("[%p] %i\n", (void *)head, head->n);

		if (result > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
