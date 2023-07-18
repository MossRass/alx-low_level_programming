#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog
 * @d: dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
