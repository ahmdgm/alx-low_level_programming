#include "dog.h"
#include <stdlib.h>

/**
* init_dog - function that initialize a variable of type struct dog
* @d: pointer to structure
* @name: ponter to char
* @age: float
* @owner: pointer to char
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
