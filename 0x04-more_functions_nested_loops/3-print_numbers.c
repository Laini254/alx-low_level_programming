#include "main.h"

/**
*print_numbers - prints numbers (0 through 9)
*ends with a new line
*Return: (0 through 9)
*/
void print_numbers(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}

	_putchar('\n');

}
