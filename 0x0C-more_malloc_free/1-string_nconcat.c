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
	unsigned int i, j, x;

	i = 0;
	j = 0;
	x = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j] && n > j)
		j++;
	new = malloc(sizeof(char) * (i + j + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new[x++] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
		new[x++] = s2[j];
	new[x] = '\0';
	return (new);
}
