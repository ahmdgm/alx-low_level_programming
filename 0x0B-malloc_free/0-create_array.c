#include "main.h"
#include <stdlib.h>

/**
* create_array - function that creates an array of chars,
* and initializes it with a specific char.
* @size: first parameter
* @c: second one
* Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
