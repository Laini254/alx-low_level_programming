#include <stdio.h>

/**
 *main - Entry point
 *Description: Print all numbers of base64 in lowercase.
 *You can only use `putchar`
 *Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
