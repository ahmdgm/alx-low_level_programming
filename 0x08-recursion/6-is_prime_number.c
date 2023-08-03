#include "main.h"
/**
* is_prime_number - returns true if the number is prime
* @n: the number to check
* Return: true if the number is prime
*/

int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n / 2; i++)
		return (!(n % i == 0));
}
