#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Populates struct dog with information
 * struct dog - the data structure containing slots for variables to fill
 * @d: variable to hold the place of struct dog
 * @name: name variable to populate spot in struct
 * @age: age variable to populate spot in struct
 * @owner: owner variable to populate spot in struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (!d)
{
return;
}

d->name = name;
d->age = age;
d->owner = owner;
}
