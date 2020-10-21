#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdlib.h>

/*function that prints a name */
void print_name(char *name, void (*f)(char *));

/*function that print a character*/
int _putchar(char c);

/*function that executes a function given as a 
 *parameter on each element *of an array.*/
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
