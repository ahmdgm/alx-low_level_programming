#include "main.h"
/**
* _strchr - function that returns the first apperance of the char in string
* @s: string passed
* @c: character passed
* Return:pointer to the first occurance of the char
*/

char *_strchr(char *s, char c)
{
	int i = 0;i

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
		
	}
	return (0);
}
