#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - computes specified operation
 * @argc: arguments should always be four
 * @argv: main.c <num1> <operator> <num2>
 * Return: Returns 0 on success; 98, 99, or 100 otherwise
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	char *op;
	int (*f)(int, int);
	char *e = "Error\n";

	if (argc != 4)
	{
		printf("%s", e);
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);
	f = get_op_func(op);
	if (!f)
	{
		printf("%s", e);
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("%s", e);
		exit(100);
	}
	result = f(num1, num2);
	printf("%i\n", result);
	return (0);
}
