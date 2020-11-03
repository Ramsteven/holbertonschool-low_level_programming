#include "lists.h"
/**
  *free_listint- clean heap memomy
  *@head:node gives
  *
  * Return: nothing
  **/
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);

		head = head->next;
	}
}
