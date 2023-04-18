#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strlen - function that returns the length of a string.
 *  @s: string to be passed as a parametter
 *  Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: string to be copied
 * @dest: new string
 * Return: a pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len])
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: array-name of the dog
 * @age: float - age of the dog
 * @owner: array owner of the dog
 * Return: new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(name);
	new->name = malloc(sizeof(char) * (len + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	len = _strlen(owner);
	new->owner = malloc(sizeof(char) * (len + 1));
	if (!new->owner || !len)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	return (new);
}
