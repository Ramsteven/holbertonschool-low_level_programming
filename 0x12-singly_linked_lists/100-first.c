#include "lists.h"

/**
  *myStartupFun- change constructor of main
  *@constructor- its a bultin parameter of c
  *Return- nothing
  *
  **/
void myStartupFun(void) __attribute__((constructor));
/**
  *myStartupFun- run my printf befor that the main file
  *@void: nothing
  *Return: nothing
  *
  **/
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
