#include <unistd.h>

/**
 * _islower - function  checks for lowercase character.
 *
 * @c: is the letter to be passed as a parameter
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
