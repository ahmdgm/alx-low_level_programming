#include "main.h"

/**
* _strncat -  function that concatenates two strings.
* @dest: first string passed
* @src: second one
* @n: no of bytes to concatenate
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int length = 0, i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[j] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
