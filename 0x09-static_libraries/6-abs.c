#include "main.h"

/**
 *  _abs - function that computes the absolute value of an integer
 *
 * @n: is the number to be passed as a parameter
 *
 * Return:  the absolute value of an integer.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}
