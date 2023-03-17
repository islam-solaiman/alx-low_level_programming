#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;
	int digit;

	alphabet = 97;
	digit = 48;
	while ((digit >= 48) && (digit <= 57))
	{
		putchar(digit);
		digit++;
	}
	while ((alphabet >= 97) && (alphabet <= 102))
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
