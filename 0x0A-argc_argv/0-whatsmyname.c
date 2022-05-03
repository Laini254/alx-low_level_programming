#include<stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - starting point
 * @argv: the chaine of chaine
 * @argc: the int
 * Return: 0
 */

int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
