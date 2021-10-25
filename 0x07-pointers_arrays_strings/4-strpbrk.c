#include "main.h"

/**
 * _strpbrk - Searches a string for one of many specific bytes
 * @s: The string being searched for acceptable bytes
 * @accept: The byte being searched for in s
 * Return: Either returns the byte, or NULL if nothing found
 */

char *_strpbrk(char *s, char *accept)
{
{
unsigned int i, j;
i = 0;
while (s[i])
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
i++;
}
return ('\0');
}
}
