#include "lists.h"
/**
  *add_node_end- add  element in the last part of the list
  *@head:the firts node
  *@str: string to add to the new node
  * Return: return list created
  **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *other;
	list_t *last = *head;

	other = malloc(sizeof(list_t));

	if (!other)
		return (NULL);

	other->str = strdup(str);
	other->len = _strl(str);
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

/**
 * _strl - find size of a string
 * @str: string received
 * Return: Size integer
 */
int _strl(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
