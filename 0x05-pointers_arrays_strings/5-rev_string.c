#include "main.h"

/**
* rev_string -  function that reverses a string.
* @s: string passed
*/

void rev_string(char *s)
{
	char tmp;
	int i, counter = 0, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	counter = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[counter];
		s[counter] = tmp;
		counter--;
	}
}
