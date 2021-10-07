#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: destination for strcpy function
 * @src: Source of string to be copied to destination
 * Return: Returns Dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
if (*src == '\0')
{
return (dest);
}
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}

return (dest);
}
