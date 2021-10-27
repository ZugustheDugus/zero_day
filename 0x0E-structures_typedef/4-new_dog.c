#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
{
free(newdog);
return (NULL);
}

if (name == NULL)
{
free(newdog);
return (NULL);
}

if (age == '\0')
{
free(newdog);
return (NULL);
}

if (owner == NULL)
{
free(newdog);
return (NULL);
}

newdog->name = _strdup(name);
newdog->owner = _strdup(owner);

newdog->age = age;

return (newdog);

}

/**
 * _strdup - return the pointer to the start of a string
 * @str: The string being pointed to and duplicated
 * Return: Return the string pointed to
 */

char *_strdup(char *str)
{
unsigned int n, l = 0;
char *s;

if (str == 0)
{
return (NULL);
}

while (str[l])
{
l++;
}
l++;

s = malloc(l *sizeof(char));
if (s == 0 || s == NULL)
{
return (NULL);
}

for (n = 0 ; n < l ; n++)
{
s[n] = str[n];
}
return (s);
}
