#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!haystack[i])
		return (0);
	if (!needle[i])
		return (&haystack[i]);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			while (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
