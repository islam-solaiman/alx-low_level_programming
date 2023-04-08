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
	int i;

	i = 1;

	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", _atoi(argv[i]) * _atoi(argv[i + 1]));
	return (0);
}
