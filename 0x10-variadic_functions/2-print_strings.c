#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line.
* @separator:  string to be printed between the strings
* @n: number of strings  to be printed
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list  ptr;
        unsigned char i;

        va_start(ptr, n);

        for (i = 0; i < n; i++)
        {
                printf("%s", va_arg(ptr,char *));
                if ((i != n-1))
                printf("%s", separator);
        }
        va_end(ptr);
        printf("\n");

}
