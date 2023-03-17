#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	alphabet = 97;
	while ((alphabet >= 97) && (alphabet <= 122))
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
