#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to be printed.
 */

void puts_half(char *str)
{
	int i;
	int len;

	i = 0;
	while (str[i])
		i++;
	len = (i - 1) / 2;
	len += 1;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');

}
