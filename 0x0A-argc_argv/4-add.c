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
	int i, j, count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		count += _atoi(argv[i]);
		i++;
	}
	printf("%d\n", count);
	return (0);
}
