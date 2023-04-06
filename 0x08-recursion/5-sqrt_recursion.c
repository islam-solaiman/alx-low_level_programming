#include "main.h"

/**
 * sqrt_checker  - helper function.
 *  @n: number to be checked.
 *  @x: itrator.
 *  Return: square root ot -1 of no square root.
 */

int sqrt_checker(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x  == n)
		return (x);
	return (sqrt_checker(n, x + 1));
}

/**
 *  _sqrt_recursion  - function returns the natural square root of a number.
 * @n: number to be checked.
 * Return: square root ot -1 of no square root.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_checker(n, 1));
}
