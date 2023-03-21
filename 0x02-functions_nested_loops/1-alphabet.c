#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char *str;

	i = 0;
	str = "abcdefghijklmnopqrstuvwxyz";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
