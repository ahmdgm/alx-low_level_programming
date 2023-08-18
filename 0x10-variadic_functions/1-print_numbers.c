#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: string to be printed between numbers
* @n:number of integers passed to the function
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list  ptr;
	unsigned char i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");

}
