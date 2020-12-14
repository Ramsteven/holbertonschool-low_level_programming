#include "lists.h"
/**
 *get_dnodeint_at_index- function that return a node with nth
 *@head: pointer that pointed a head of list
 *@index: the number element to return
 *
 *Return: not return
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (!tmp)
		return (NULL);

	for (; i < index && tmp; i++)
		tmp = tmp->next;

	return (tmp);
}
