#include "lists.h"

/**
  *reverse_listint- function thar reverse a list
  *@head: received list
  *
  *Return: the list reversed
  **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *rest;

	if (!head || !(*head))
		return (*head);

	first = *head;
	rest = first->next;

	if (!rest)
		return (*head);

	reverse_listint(&rest);
	first->next->next = first;
	first->next = NULL;
	*head = rest;
	return (*head);
}
