#include "main.h"

/**
* _strcat -  function that concatenates two strings.
* @dest: first string passed
* @src: second one
*/

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
