#include "stdlib.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size for the array to creat.
 * @c: char to intialize the array.
 * Return: NULL if size = 0 , pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (0);
	str = (char *) malloc(sizeof(char) * size);

	if (str == NULL)
		return (0);

	while (i < size)
		str[i++] = c;
	return (str);
}
