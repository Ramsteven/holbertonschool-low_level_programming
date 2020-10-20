#include "dog.h"

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
	char *nameDog, *ownerDog;
	int i = 0, j = 0, len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	nameDog = malloc(sizeof(char) * len1 + 1);

	ownerDog = malloc(sizeof(char) * len2 + 1);

	d = malloc(sizeof(dog_t));

	if (!d || !nameDog || !ownerDog)
	{
		return (NULL);
	}
	else
	{
		while (i < len1)
		{
			nameDog[i] = name[i];
			i++;
		}
		nameDog[i] = 0;

		while (j < len2)
		{
			ownerDog[j] = owner[j];
			j++;
		}

		ownerDog[j] = 0;
		(*d).name = nameDog;
		(*d).age = age;
		(*d).owner = ownerDog;
	}
	return (d);
}
