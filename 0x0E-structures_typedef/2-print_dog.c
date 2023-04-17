#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Write a function that prints a struct dog.
 * @d: struct passed as a parametter.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	else
		printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
}
