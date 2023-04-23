#include  "main.h"
#include <unistd.h>

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

/**
 * _printf - function that produces output according to a format.
 * @format: first argument - array of char represent the type.
 * Return:  number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, count, len;
	va_list args;

	count = _strlen(format);
	va_start(args, format);

	i = 0;
	while (format[i] && i < count)
	{
		if (format[i] == '%')
		{
			len = check_type(format[i + 1], args);
			i++;
		}
		else
			_putchar(format[i]);
		i++;
	}
	return (len);


}
