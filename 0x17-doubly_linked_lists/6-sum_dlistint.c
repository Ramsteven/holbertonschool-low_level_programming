#include "lists.h"
/**
 *sum_dlistint- function that add all number of a list
 *@head: pointer that pointed a head of list
 *
 *Return: sum of all elements
 **/

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
