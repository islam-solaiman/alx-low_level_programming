#include "main.h"

/**
 *  _isupper - function that checks for uppercase character.
 *  Return: 1 if uppercase and 0 otherwise.
 *  @c: is the character to passed as a parametter
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
