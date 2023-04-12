#include <stdlib.h>

/**
 * argstostr - unction that concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: arguments to be passed as a parammeter.
 * Return: NULL if ac == 0 or av == NULL,
 * Return a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, x, len;
	char *new;

	len = 0;
	i = 0;
	x = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			len++;
		}
		len++;
		i++;

	}
	new =  malloc(sizeof(char) * len);
	if (!len)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			new[x++] = av[i][j++];
		new[x++] = '\n';
		i++;
	}
	new[x++] = '\0';
	return (new);


}
