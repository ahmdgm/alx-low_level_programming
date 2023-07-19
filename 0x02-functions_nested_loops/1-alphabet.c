#include "main.h"
/**
 * print_alphabet - print alphapets in lower case
 */

void print_alphabet(void)
{
	char alphapet;
	for (alphapet = 'a'; alphapet <= 'z'; alphapet++)
		_putchar(alphapet);
	_putchar('\n');
}
