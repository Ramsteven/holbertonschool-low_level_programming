#include "lists.h"

/**
  *insert_nodeint_at_index-insert a new node at a given position
  *@head: list received
  *@idx: indexing
  *@n: value
  *
  *Return: return list
  **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!head || !temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	if (!(*head) && idx == 0)
	{
		*head = temp;
		return (temp);
	}
	if (!idx)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}

	current = *head;
	while (i++ < idx - 1)
	{
		current = current->next;
		if (!current)
		{
			free(temp);
			return (NULL);
		}
	}
	temp->next = current->next;
	current->next = temp;

	return (temp);
}
