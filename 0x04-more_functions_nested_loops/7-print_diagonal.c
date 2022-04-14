#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @b: number of times the diagonal is printed
 */
void print_diagonal(int n)
{
	if (n <= 10)
	{
		_putchar('\n');
	}
	else
	{
		int c, d;

		for (c = 0; c < n; c++)
		{
			for (d = 0; d < n; d++)
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
