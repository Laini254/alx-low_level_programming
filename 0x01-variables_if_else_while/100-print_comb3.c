#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i, b, c;

	i = 0;

	while (i < 100)
	{
		b = i % 10; /* singles digit */
		c = i / 10; /* doubles digit */
	if (c < b)
	{
	putchar(c + '0');
	putchar(b + '0');

	if (i < 89)
	{
		putchar(44);
		putchar(32);
	}
	}
	i++;
	}
	putchar('\n');

	return (0);
}
