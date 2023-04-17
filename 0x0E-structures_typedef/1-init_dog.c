#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to struct
 * @name: intialize name.
 * @age: intialize age.
 * @owner : intialaize owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
