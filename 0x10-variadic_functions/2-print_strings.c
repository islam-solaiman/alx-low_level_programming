#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings.
 * @separator: string to be printed between strings.
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			str = "(nil)";
			printf("%s", str);
		}
		if (str != NULL)
			printf("%s", str);
		if (i < n && separator)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}

