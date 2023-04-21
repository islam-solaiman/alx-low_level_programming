#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: list of arguments to passed as a parametter
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep;
	char *str;

	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (i == 0)
			sep = "";
		else
			sep = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char  *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			i++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}