#include "lists.h"

/**
  *delete_nodeint_at_index: delete an specific node 
  *@head: list received
  *@index: index for delete
  *
  *Return: 1 o -1 if fail
  *
  **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	listint_t *temp;
	
	current = *head;

	if(!head || !*(head))
		return (-1);

	if(index == 0)
	{
		*head = current->next;
		free(current);
		return(1);
	}	
		
		


	while (i++ < index-1)
		current = current->next;

	if(!current || !(current->next))
		return(-1);
	
	temp = current->next;
	free(current->next);
	current = current->next;
	current->next = temp->next;
	
	return (1);
}
