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
	int i, temp, count;

	i = 1;
	temp = 0;
	count = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return ('0');
	}
	else
		while (argv[i])
		{
			if (_atoi(argv[i]) == 0)
			{
				count++;
				printf("Error\n");
				return (1);
				break;
			}
			else
				temp += _atoi(argv[i]);
			i++;
		}
	if (count == 0)
		printf("%d\n", temp);
	return (0);
}
