#include "main.h"

/**
 * _strcmp - Function to compare the length of two strings
 *
 * @s1: The first string
 * @s2: The second string
 * Return: Subtract the strings and print a number that indicates relative size
 */

int _strcmp(char *s1, char *s2)
{
int i, j;
i = 0;
j = 0;

while (s1[i])
{
if (s1[i] != s2[j])
{
break;
}
s1[i]++;
s2[j]++;
if (s1[i] == '\0' || s2[j] == '\0')
{
break;
}
}
return (s1[i] - s2[j]);
}
