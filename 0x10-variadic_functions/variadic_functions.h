#ifndef _VARIADICS_H
#define _VARIADICS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/*function that returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);

/*function that prints numbers, followed by a new line.*/
void print_numbers(const char *separator, const unsigned int n, ...);

int _putchar(char n);


#endif
