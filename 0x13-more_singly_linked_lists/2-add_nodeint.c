#include "lists.h"
/**
  *add_nodeint- add new element in the list
  *@head:the firts node
  *@n: string to add to the new node
  * Return: return list created
  **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *other;

	other = malloc(sizeof(listint_t));

	if (!other || !head)
		return (NULL);

	other->n = n;
	other->next = NULL;

	if (*head)
		other->next = *head;
	*head = other;

	return (other);
}
