#include "dog.h"

/**
  *init_dog- function that set parameters
  *@d:adding task
  *@name: name of dog
  *@age: age of dog
  *@owner: owner dog
  **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
