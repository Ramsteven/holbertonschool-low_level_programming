#include <ctype.h>
#include "holberton.h"

/**
  * _islower - check if c is a lowercase
  *@c: parameter of c variable 
  *
  * Return 1 if is lower case otherwise return 0
  */

int _islower(int c)
{
	if(islower(c) > 0){
		return(1);
	} 
	
	return (0);
}
