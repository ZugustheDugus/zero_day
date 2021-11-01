#include "main.h"

/**
 * _strcat - check the code for Holberton School students.
 * @src: Source string to be appended to dest
 * @dest: String which src will be appended to
 * Return: Returns the modified string to the main file
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0 ; src[j] != '\0' ; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
