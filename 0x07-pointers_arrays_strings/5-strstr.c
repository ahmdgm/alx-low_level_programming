#include "main.h"

/**
* _strstr - function that locates a substring
* @haystack: the string
* @needle: substring
* Return: a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, no_sub, n;

	i = 0;
	j = 0;
	n = 0;
        while (needle[no_sub] != '\0')
        {
                
                no_sub++;

        }
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			for (n = 0; n < no_sub; n++)
			{
				if (haystack[i+n] == needle[j+n])
				{
					
				}
			}
		}
		i++;
	}
}
