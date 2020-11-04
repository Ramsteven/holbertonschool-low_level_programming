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

	current = *head;

	temp = malloc(sizeof(listint_t));

	if (!head || !temp)
		return (NULL);

	if (!idx)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	temp->n = n;
	temp->next = NULL;

	while (i++ < idx - 1)
		current = current->next;

	temp->next = current->next;
	current->next = temp;

	return (temp);
}
