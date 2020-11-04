#include "lists.h"
/**
  *add_nodeint_end- add  element in the last part of the list
  *@head:the firts node
  *@n: string to add to the new node
  * Return: return list created
  **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *other;
	listint_t *last = *head;

	other = malloc(sizeof(listint_t));

	if (!other)
		return (NULL);

	other->n = n;
	other->next = NULL;

	if (!*head)
	{
		*head = other;

		return (other);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = other;
	return (other);
}
