#include "main.h"
/**
* print_chessboard - function that prints the chessboard.
* @a: parameter is arrayof pointers to char
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 64)
	{
		if (i % 8 == 0)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}
