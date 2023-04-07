#include "main.h"
#include <unistd.h>

/**
 * _putchar -  function to print single character
 * @c: is the character to bassed as a parameter to be printed
 * Return: 1 when success and -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
