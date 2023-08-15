#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializesa variable of type struct dog
 * struct dog - structure of dog containg diff types
 * @d: pointer to d
 * @name: pointer to name
 * @age: age of dog
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
