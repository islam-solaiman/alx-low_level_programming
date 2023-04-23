#include <unistd.h>

/**
 * _putchar - function to print single character
 * @c: is the character to bassed as a parameter to be printed
 * Return: 1.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
