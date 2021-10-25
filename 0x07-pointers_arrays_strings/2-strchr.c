#include "main.h"
#include <stdio.h>

/**
 * _strchr - Index to a specific char in a string
 * @s: String to search
 * @c: The char to locate
 * Return: Returns the char at s[i], also default success at end
 */

char *_strchr(char *s, char c)
{
unsigned int i = 0;

while (s[i])
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (0);
}
