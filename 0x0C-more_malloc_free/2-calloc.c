#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements to be allocated.
 * @size:  size of elements.
 * Return:  a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int n_bytes;

	n_bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(n_bytes);
	if (str == NULL)
		return (NULL);
	while (n_bytes > 0)
	{
		str[n_bytes] = 0;
		n_bytes--;
	}
	str[n_bytes] = 0;
	return ((void *)str);

}
