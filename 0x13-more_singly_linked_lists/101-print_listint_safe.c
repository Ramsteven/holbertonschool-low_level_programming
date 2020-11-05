#include "lists.h"
/**
  *print_listint_safe- print list with loop
  *@head: list received
  *
  *Return: numbers of nodes
  **/
size_t print_listint_safe(const listint_t *head)
{
	register short i = 0;

	int result;
		
	if (!head)
		return (i);

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
