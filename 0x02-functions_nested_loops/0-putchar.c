#include "main.h"

/**
 * main - Enrty point
 *
 * Return: Always 0 (Succeed)
 */
int main(void)
{
	int i;
	char *str;

	i = 0;
	str = "_putchar";
	while (str[i])
	{
		_putchar(str[i]);
			i++;
	}
	_putchar('\n');
	return (0);
}
