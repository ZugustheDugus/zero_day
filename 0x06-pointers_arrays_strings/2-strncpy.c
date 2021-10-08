#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Original string to be modified into output
 * @src: String to be appended to dest, in this case a copy
 * @n: variable which indexes the number of bytes of dest to print
 * Return: Returns finished, updated dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] && n--)
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
