#include "main.h"

/**
* set_bit - function to set bit
* @n: number passed
* @index: index of bit we wnat to set it
* Return: 1 if it worked, or -1 if an error occurred
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n > 64)
		return (-1);
	*n |= *n << index;
	return (1);
}
