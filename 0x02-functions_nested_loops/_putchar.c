#include <unistd.h>

/**
 * Description : _pustchar.c  function to print single character
 *
 * c is the character to bassed as a parameter to be printed
 *
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
