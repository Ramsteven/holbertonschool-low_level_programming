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
	char *nameDog;
	char *ownerDog;

	nameDog = malloc(sizeof(name));

	ownerDog = malloc(sizeof(owner));

	d = malloc(sizeof(dog_t));

	if (!d || !nameDog || !ownerDog)
	{
		free(nameDog);
		free(ownerDog);
		return (NULL);

	}
	else
	{
		nameDog = name;
		ownerDog = owner;
		(*d).name = nameDog;
		(*d).age = age;
		(*d).owner = ownerDog;
	}

	return (d);
}
