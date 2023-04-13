#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first int.
 * @max: second int.
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *new;
	unsigned int i;

	i = 0;
	if (min > max)
		return (NULL);
	new = malloc(sizeof(int) * (max - min + 1));
	if (new == NULL)
		return (NULL);
	while (min <= max)
	{
		new[i++] = min++;
	}
	new[i] = '\0';
	return (new);
}
