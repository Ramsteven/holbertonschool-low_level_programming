#include "lists.h"
/**
 *delete_dnodeint_at_index- function that return a node with nth
 *@head: pointer that pointed a head of list
 *@index: index of list where the new node should be added.
 *Return: 1 if delete successful otherwise 0
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	/* size of list*/
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	if (index == 0)
	{
		if (i != 0)
		{
			tmp = *head;
			if (tmp->next)
				tmp->next->prev = NULL;
			*head = tmp->next;
			free(tmp);
		} else
			return (-1);
	}
	else if (index > i || !tmp)
		return (-1);
	else if (i == index)
	{
		tmp->prev->next = NULL;
		free(tmp);
	}
	else
	{
		tmp = *head;
		for (i = 0; i < index && tmp; i++)
			tmp = tmp->next;

		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
