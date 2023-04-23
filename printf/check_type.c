#include "main.h"

/**
 * check_type - function checks the type of the argument.
 * @c: argument - type char
 * @args: arguments passed as a parametter.
 * Return:  number of characters printed.
 */

int check_type(char c, va_list args)
{
	int len;

	len = 0;
	if (c == 'c')
		len += _putchar(va_arg(args, int));
	if (c == 's')
		len += _puts(va_arg(args, char *));
	if (c == '%')
		len += _putchar('%');
	va_end(args);
	return (len);
}
