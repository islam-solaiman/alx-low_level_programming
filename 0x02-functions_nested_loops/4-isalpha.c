#include <unistd.h>

/**
 * _isalpha - function  checks for aphabetic character.
 *
 * @c: is the letter to be passed as a parameter
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
