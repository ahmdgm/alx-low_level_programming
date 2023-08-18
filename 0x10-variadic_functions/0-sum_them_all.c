#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: first parameters
* Return: result of all parameters
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	va_start(ptr, n);

	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
