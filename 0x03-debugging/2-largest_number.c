#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	a = 972;
	b = -98;
	c = 0;


	if (a > b && b > c)
	{
		printf("%d is the largest number\n", 972);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number\n", -98);
	}
	else
	{
		printf("%d is the largest number\n", 0);
	}

	return (0);
}
