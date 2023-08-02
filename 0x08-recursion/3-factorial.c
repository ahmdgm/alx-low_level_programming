#include "main.h"
/**
* factorial - function to calc factorial of the number
* @n: passed number
* Return: factorial
*/

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	} else
	{
		return (n * factorial(n - 1));
	}

}
