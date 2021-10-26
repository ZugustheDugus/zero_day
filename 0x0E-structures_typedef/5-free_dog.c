#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to dog_t
 * @d: variable for storing the values of dog_t
 * Return: Returns NULL if nothing in d
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
return;
}
