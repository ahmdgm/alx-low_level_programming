#include "main.h"

/**
* _memcpy - copy memory area
* @dest: destinaion to be copied
* @src:  source to copy from it 
* @n: no of bytes to copy
* Return: pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
