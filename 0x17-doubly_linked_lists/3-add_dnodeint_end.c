#include "lists.h"
/**
 *add_dnodeint_end- add one node in the finish of list
 *@head: pointer that pointed a head of list
 *@n:number to hold inside new node
 *
 *Return: the new direction the last node add
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *tmp = *head;

	end = malloc(sizeof(dlistint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;
	end->prev = NULL;


	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = end;
		end->prev = tmp;
	}

	return (end);
}
