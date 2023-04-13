#include <stdlib.h>

/**
 * string_nconcat - unction that concatenates two strings.
 * @s1: first string
 * @s2: seconde string.
 * @n: number of bytes of second string to be concatinated.
 * Return: pointer shall point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len1, len2, i, j, x;

	len1 = 0;
	len2 = 0;
	x = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	if (n >= len2)
		new = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		new = malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new[x++] = s1[i];
	for (j = 0; j < n; j++)
		new[x++] = s2[j];
	new[x] = '\0';
	return (new);
}
