#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
