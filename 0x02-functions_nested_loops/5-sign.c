#include "main.h"

/**
 *print_sign - print + or -
 *@n: we check the value n
 *Return: 1 and prints + if n is greater than zero
 */

int print_sign(int n)
{
        if (n > 0)
        {
            _putchar('+');
            return (1);
        } else if (n == 0)
        {
            _putchar(48);
            return (0);
        } else if (n < 0)
        {
            _putchar('-');
        }
	return (-1);
}
