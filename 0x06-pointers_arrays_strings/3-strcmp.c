#include "main.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
}
return (s1[i] - s2[j]);
}
