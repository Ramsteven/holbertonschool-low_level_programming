#include "lists.h"
/**
 *insert_dnodeint_at_index- function that return a node with nth
 *@h: pointer that pointed a head of list
 *@idx: index of list where the new node should be added.
 *@n: number that the new added node should be hold.
 *Return: return the new node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	/* size of list*/
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}

	if (idx == 0)
		new = add_dnodeint(h, n);
	else if (idx > i)
		return (NULL);
	else if (i == idx)
		new = add_dnodeint_end(h, n);
	else
	{
		tmp = *h;
		new = malloc(sizeof(dlistint_t));
		if (!new || !tmp)
		return (NULL);

		for (i = 0; i < idx && tmp; i++)
			tmp = tmp->next;

		new->n = n;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
		tmp->prev = new;
	}
	return (new);
}
