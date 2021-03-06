#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Dog object
 * @name: Name of dog
 * @owner: Owner of dog
 * @age: Age of dog
 * Return: 0
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
