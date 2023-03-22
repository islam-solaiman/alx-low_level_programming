#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	n = 0;
	x = n;
	while (n < 1024)
	{
		if (((n % 3) == 0) || ((n % 5) == 0) || ((n % 6) == 0))
			x += n;
		n++;
	}
	printf("%d\n", x);
	return (0);
}
