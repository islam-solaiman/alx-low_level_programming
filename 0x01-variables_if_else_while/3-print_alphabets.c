#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;
	int upper;

	lower = 97;
	upper = 65;
	while ((lower >= 97) && (lower <= 122))
	{
		putchar(lower);
		lower++;
	}
	while ((upper >= 65) && (upper <= 90))
	{
		putchar(upper);
		upper++;
	}
	putchar(10);
	return (0);
}
