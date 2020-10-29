#include "lists.h"
/**
  *free_list- add new element in the list
  *@head:the firts node
  *
  * Return: nothing
  **/
void free_list(list_t *head)
{

	while (head)
	{
		free(head->str);
		free(head);

		head = head->next;
	}
}
