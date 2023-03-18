#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	b = 49;
	c = 50;
	while ((b > a) && (c > b) && (c <= 57))
	{
		putchar(a);
		putchar(b);
		putchar(c);
		if ((c == 57) && (b == 56) && (a == 55))
			break;
		putchar(',');
		putchar(' ');
		c++;
		if (c > 57)
		{
			b++;
			c = b + 1;
		}
		if (b > 56)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
	putchar('\n');
	return (0);
}
