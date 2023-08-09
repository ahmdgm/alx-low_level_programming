#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
* @str: parameter passed
* Return: a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *d;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		length++;
	d = malloc(sizeof(char) * (length + 1));
	if (d == NULL)
		return (NULL);
	while ((d[i] = str[i]) != '\0')
		i++;
	return (d);
}
