#ifndef DOG_H
#define DOG_H
/**
* struct dog - Define a new type struct dog
* @name: string
* @age: float
* @owner: string
*
* Description: Define a new type struct dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
