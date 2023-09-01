#include "main.h"
/**
* get_bit - function that returns the value of a bit at a given index.
* @n: number
* @index: index of the bit we want to get
* Return: value of the bit
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
