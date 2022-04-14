#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @b: number of times the diagonal is printed
 */
void print_diagonal(int b)
{
	if (b <= 10)
	{
		_putchar('\n');
	}
	else
	{
		int c, d;

		for (c = 0; c < b; c++)
		{
			for (d = 0; d < b; d++)
			{
				if (d == c)
					_putchar('\\');
				else if (d < c)
					_putchar('');
			}
			_putchar('\n');
		}
	}
}
