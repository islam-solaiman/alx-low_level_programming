#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet;

	alphabet = 122;
	while ((alphabet <= 122) && (alphabet >= 97))
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar(10);
	return (0);
}
