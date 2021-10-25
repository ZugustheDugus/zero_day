#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings for n bytes
 * @n: number of bytes to concatenate
 * @s1: Primary string being added to
 * @s2: Second string being added to Primary for n bytes
 * Return: Returns the string after concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *s;
unsigned int i, j, first = strlen(s1);

if (s1 == 0 || s1 == NULL)
{
s1 = "";
}
if (s2 == 0 || s2 == NULL)
{
s2 = "";
}

s = malloc(sizeof(*s) * (first + n + 1));

if (!s)
{
return (NULL);
}

for (i = 0, j = 0 ; i < (first + n) ; i++)
{
if (i < first)
{
s[i] = s1[i];
}
else
{
s[i] = s2[j++];
}
}
s[i] = '\0';
return (s);
}
