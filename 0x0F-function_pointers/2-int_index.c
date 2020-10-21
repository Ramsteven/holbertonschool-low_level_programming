#include "function_pointers.h"

/**
  *int_index- unction that searches for an integer
  *@array:array received
  *@size:size is the number the elements of array
  *@cmp:is pointer to the function to be used to compare values
  *
  *Return: return i if found the number
  **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int j;

	if (size > 0 && array && cmp)
	{
		while (i < size)
		{
			j = cmp(array[i]);

			if (j > 0)
			{
				return (i);
			}
			else
				i++;
		}
	}
	return (-1);
}
