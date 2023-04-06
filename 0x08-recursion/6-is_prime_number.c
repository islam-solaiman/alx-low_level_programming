#include "main.h"

/**
 * is_prime_number -  function checks if the int is prime number.
 * @n: is the number to be checked.
 * prime_checker - helper function to check if the number is prime.
 * @x: int = 2 to check if the number is prime.
 * @max: n / 2 to check if the number is prime.
 * Return:  1 if the input integer is a prime number, otherwise return 0.
 */

int prime_checker(int n, int x, int max);

int is_prime_number(int n)
{
	return (prime_checker(n, 2, n / 2));
}

/**
 * prime_checker - helper function to test if the number is prime.
 * @n: number to be checked.
 * @x: an int = 2;
 * @max: an in int = n / 2;
 * Return: 1 if prime , 0 if not prime.
 */
int prime_checker(int n, int x, int max)
{
	if (n % x == 0 || n < 0 || n == 1)
		return (0);
	else if (n % x != 0 && x <= max)
		return (prime_checker(n, x + 1, max));
	else
		return (1);

}
