#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - unction that returns the sum of all its parameters.
 * @n: number of arguments.
 * Return: sum of arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	sum = 0;
	i = 0;
	if (n == 0)
		return (0);
	va_start(args, n);
		while (i < n)
		{
			sum += va_arg(args, int);
				i++;
		}
		va_end(args);
		return (sum);

}
