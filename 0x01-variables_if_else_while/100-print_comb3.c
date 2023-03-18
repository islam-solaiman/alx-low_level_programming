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

	a = 48;
	b = 49;
	while ((b > a) && (b <= 57))
	{
		putchar(a);
		putchar(b);
		if ((b == 57) && (a == 56))
			break;
		putchar(',');
		putchar(' ');
		b++;
		if (b > 57)
		{
			a++;
			b = a + 1;
		}
	}
	putchar('\n');
	return (0);
}
