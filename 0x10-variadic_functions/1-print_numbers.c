#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of arguments.
 * Return: number followed by a new line;
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		printf("%i", va_arg(args, int));
		if ((i + 1) < n && separator)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
