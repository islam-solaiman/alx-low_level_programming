#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal -
 * >0 if the first non-matching character in str1 is than that of str2.
 * <0 if the first non-matching character in str1 is lower than that of str2.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
