#include "lists.h"
/**
  *add_node- add new element in the list
  *@head:the firts node
  *@str: string to add to the new node
  * Return: return list created
  **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *other;

	other = malloc(sizeof(list_t));

	if (!other)
		return (NULL);

	other->str = strdup(str);
	other->len = _strl(str);
	other->next = *head;
	*head = other;

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
