#include "main.h"

/**
* str_concat - function that concatenates two strings
* @s1: first string
* @s2: second string
* Return: NULL on failur
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i = 0, j = 0;
	unsigned int length1 = 0, length2 = 0;

	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;
	s3 = malloc(sizeof(char) * (length1 + length2 + 1));

	if (s3 == NULL)
		return (NULL);
	i = 0;
	j = 0;

	if (s1)
	{
		while (i < length1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (length1 + length2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);

}
