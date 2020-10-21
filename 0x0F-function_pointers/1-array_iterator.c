#include "function_pointers.h"

/**
  *array_iterator-unction that executes a function
  *given as a parameter on each element of an array.
  *@array: array received
  *@size:  size received
  *@action: action function received
  *
  *Return: nothing
  **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size > 0)

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
