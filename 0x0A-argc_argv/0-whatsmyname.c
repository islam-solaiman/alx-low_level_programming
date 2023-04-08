#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * @argc: number of arguments.
 * @argv: commandline arguments.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
