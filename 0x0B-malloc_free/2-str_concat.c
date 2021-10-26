#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns either NULL or the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
unsigned int i = 0;
char *s;
if (s1 == 0 || s1 == NULL)
{
return (NULL);
}
else if (s2 == 0 || s2 == NULL)
{
return (NULL);
}

s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

if (s == NULL)
{
return (NULL);
}

while (*s1)
{
s[i] = *s1;
i++;
s1++;
}
while (*s2)
{
s[i] = *s2;
i++;
s2++;
}
return (s);
}

