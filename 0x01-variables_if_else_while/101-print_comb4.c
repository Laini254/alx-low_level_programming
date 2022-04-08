#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i, b, c, d;

	for (i = 0; i < 1000; i++)
	{
		b = i / 100; /* hundreds */
		c = (i / 10) % 10; /* tens */
		d - i % 10; /* singles */

		if (b < c && c < 1)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
