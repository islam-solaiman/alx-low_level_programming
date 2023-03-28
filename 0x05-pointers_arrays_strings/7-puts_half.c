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
	len = i / 2;
	while (len < i)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');

}
