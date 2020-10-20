#ifndef _DOG_H
#define _DOG_H

/**
  *struct dog - dog
  *
  *@name: name of the dog
  *@age:age of the dog
  *@owner: who own the dog
  **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function that initialize a variable of type struct do*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
