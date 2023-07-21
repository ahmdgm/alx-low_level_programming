#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long long int num = 612852475143;
	long long int largestPrimeFactor = 0;

	while (num % 2 == 0)
	{
		largestPrimeFactor = 2;
		num = 2;
	}

	for (long long int i = 3; i * i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largestPrimeFactor = i;
			num /= i;
		}
	}

	if (num > 2)
	largestPrimeFactor = num;
	printf("%lld\n", largestPrimeFactor);
	return (0);
}
