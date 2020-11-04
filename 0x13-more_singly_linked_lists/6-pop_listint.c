#include "lists.h"

/**
  *pop_listint- function that delete the head
  *@head: list received
  *
  *Return: return the new list
  **/
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *current;

	if (!head)
		return (0);

	current =  *head;

	temp = current->n;

	/*give the new adress for head**/
	*head = current->next;

	free(current);

	return (temp);
}
