#include <stdio.h>

/**
 * main - Entry point
 * Description: Using putchar function to print the alphabet in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
