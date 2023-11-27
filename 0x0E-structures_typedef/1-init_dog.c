#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - valiable initialization
 * @d: pointer
 * @name: initialized name
 * @age: initialized age
 * @owner: initialized owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
