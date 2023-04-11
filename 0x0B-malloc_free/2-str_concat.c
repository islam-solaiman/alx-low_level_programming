#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: NULL is passed, treat it as an empty string.
 * return NULL on failure.
 * return: pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;
	new = malloc((sizeof(char) * (i + j + 1)));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
