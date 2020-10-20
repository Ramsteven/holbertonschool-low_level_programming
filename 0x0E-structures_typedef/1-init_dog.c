#include "dog.h"

/**
  *int_dog- function that set parameters
  *@d:adding task
  *@name: name of dog
  *@age: age of dog
  *@owner: owner dog
  **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
