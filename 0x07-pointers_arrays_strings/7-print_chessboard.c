#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *@a: pointer
 *Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int c, d = 0;

	for (c = 0; c < 64; c++)
	{
		if (c % 8 == 0 && c != 0)
		{
			d = c;
			_putchar('\n');
		}
		_putchar(a[c / 8][c - d]);
	}
	_putchar('\n');
}
