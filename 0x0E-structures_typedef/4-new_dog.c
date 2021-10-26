#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog from struct dog
 * @name: variable copying dog name
 * @age: variable copying dog age (float)
 * @owner: variable copying dog owner
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *newdog;

newdog = malloc(sizeof(dog_t));

if (newdog == NULL)
return (NULL);

if (name == NULL)
return (NULL);

if (age == '\0')
return (NULL);

if (owner == NULL)
return (NULL);
 
newdog->name = name;
newdog->age = age;
newdog->owner = owner;
return (newdog);

}
