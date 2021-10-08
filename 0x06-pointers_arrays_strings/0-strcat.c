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
i = _strlen(dest);
for (j = 0 ; src[j] != '\0' ; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

/**
 * _strlen - check the code
 * Return: Returns the strlen
 * @s: pointer to *str
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
