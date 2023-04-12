#include <stdlib.h>

/**
 * **alloc_grid -  function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: array width.
 * @height: array height.
 * Return: NULL on failure.
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **str;
	int i;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	str = malloc(sizeof(int *) * height);
	if (!str)
		return (NULL);
	while (i < height)
	{
		str[i] = malloc(sizeof(int) * width);
		if (!str[i])
		{
			while (i >= 0)
			{
				free(str[i]);
				i--;
			}
			free(str);
			return (0);
			}
		i++;
	}
	return (str);
}
