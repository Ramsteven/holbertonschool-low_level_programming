#include "lists.h"
/**
  *add_node- add new element in the list
  *@head:the firts node
  *@str: string to add to the new node
  * Return: return list created
  **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *other;

	other = malloc(sizeof(listint_t));

	if (!other)
		return (NULL);

	other->n = n;
	other->next = *head;
	*head = other;

	return (other);
}
