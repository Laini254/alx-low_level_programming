#include "main.h"

/**
 * more_numbers - prints 10 times numbers (0 through 15)
 * ends in a new line
 */
void more_numbers(void);
{
	int a;

	for (a = 0; a < 15; a++)
	{
		_putchar((a + '0') * 10);
	}

	_putchar('\n');
}
