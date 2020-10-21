#include "function_pointers.h"

/**
  *print_name-print name with a function pointers
  *@name: character received
  *@f:function pointer received
  *
  *Return: no return
  **/
void print_name(char *name, void (*f)(char *))
{
	if(*name)
	{
		f(name);
	}	
}

