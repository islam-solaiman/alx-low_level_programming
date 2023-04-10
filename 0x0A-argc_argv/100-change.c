#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: is the string tobe converted
 * Return: is an intiger
 */
int _atoi(char *s)
{
	unsigned int temp;
	int x;

	temp = 0;
	x = 1;
	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s <= '9')
			temp = (temp * 10) + (*s - '0');
		else if (temp > 0)
			break;
	} while (*s++);
	return (temp * x);
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * @argc: number of arguments.
 * @argv: commandline arguments.
 */
int main(int argc, char *argv[])
{
	int change, quarter, ten, five, two, one;

	if (argc != 2 || *argv[1] > '9' || *argv[1] < '0')
	{
		printf("Error\n");
		return (1);
	}
	else
		change = _atoi(argv[1]);

	while (change >= 1)
	{
		for (quarter = 0; change >= 25; quarter++)
			change -= 25;
		for (ten = 0; change >= 10; ten++)
			change -= 10;
		for (five = 0; change >= 5; five++)
			change -= 5;
		for (two = 0; change >= 2; two++)
			change -= 2;
		for (one = 0; change >= 1; one++)
			change -= 1;
	}
	printf("%d\n", (quarter + five + ten + five + two + one));
	return (0);
}

