#include "lists.h"
/**
  *free_listint- clean heap memomy
  *@head:node gives
  *
  * Return: nothing
  **/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *actual;
	
	actual = *head;

	while (actual)
	{
		tmp = actual;
		actual = tmp->next;
		free(tmp);
	}

	*head = NULL;
	head = NULL;
}
