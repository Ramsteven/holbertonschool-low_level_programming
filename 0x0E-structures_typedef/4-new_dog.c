#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

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
	int i = 0;
	int j = 0;
	int len1;
	int len2;
	
	len1 = _strlen(name);
	len2 = _strlen(owner);
	
	nameDog = malloc(sizeof(char) * len1 + 1);

	ownerDog = malloc(sizeof(char) * len2 + 1);

	d = malloc(sizeof(dog_t));

	if (!d || !nameDog || !ownerDog)
	{

		free(nameDog);
		free(ownerDog);
		return (NULL);

	}
	else
	{
		while(i <= len1)
		{
			nameDog[i] = name[i];
			i++;
		}
		
		
		
		while(j <= len2)
		{
			ownerDog[i] = owner[j];
			j++;
		}
		
		(*d).name = nameDog;
		(*d).age = age;
		(*d).owner = ownerDog;
	}

	return (d);
}
