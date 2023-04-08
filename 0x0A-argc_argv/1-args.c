#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * @argc: number of arguments.
 * @argv: commandline arguments.
 */

int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
