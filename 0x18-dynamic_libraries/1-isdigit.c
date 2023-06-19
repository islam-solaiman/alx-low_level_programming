#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * Return: 1 if c is a digit and 0 otherwise.
 * @c: is the parammeter to be checked
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
