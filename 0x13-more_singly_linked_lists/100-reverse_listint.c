#include "lists.h"

/**
  *reverse_listint- function thar reverse a list
  *@head: received list
  *
  *Return: the list reversed
  **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	if (!head || !(*head))
		return (*head);

	if (!(current->next))
		return (*head);

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
