#include "variadic_functions.h"

/**
* print_all - function that prints anything.
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned char i = 0;
	char *str, *sep = "";

	va_start(ptr, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ptr, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ptr, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;

		}
		i++;
		sep = ", ";
	}
	va_end(ptr);
	printf("\n");
}
