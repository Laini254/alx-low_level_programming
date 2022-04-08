#include <stdio.h>

/**
 * main - Entry point
 * use putchar to print lowercase alphabet in reverse
 * End with a new line
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
