#include "lists.h"
/**
 *free_dlistint- function that free all allocations of one list
 *@head: pointer that pointed a head of list
 *
 *Return: not return
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
