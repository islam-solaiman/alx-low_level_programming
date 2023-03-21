#include "main.h"

/**
 * jack_bauer - function prints every minute of the day of Jack Bauer
 *
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
		b = 0;
	}
}
