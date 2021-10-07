#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: destination for strcpy function
 * @src: Source of string to be copied to destination
 * Return: Returns Dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0 ; src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
