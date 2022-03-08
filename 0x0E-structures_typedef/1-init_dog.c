#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - fonction
 *@dog: dog
 *@d: the dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *Return: 0.
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
