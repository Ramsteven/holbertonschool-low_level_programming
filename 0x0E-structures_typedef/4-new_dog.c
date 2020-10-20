#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *new_dog- function that create a new dog
  *@name:adding task
  *@age: age of dog
  *@owner: owner dog
  *
  *Return: pointer of datatype dog_t
  **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;
	char *n;
	char *o;

	n = malloc(sizeof(name));

	o = malloc(sizeof(owner));

	d = malloc(sizeof(dog_t));

	if (!d || !o || !n)
	{
		return (NULL);
	}
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

	return (d);
}
