#include "main.h"

/**
 * more_numbers - prints 10 times numbers (0 through 15)
 * ends in a new line
 */
void more_numbers(void);
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
