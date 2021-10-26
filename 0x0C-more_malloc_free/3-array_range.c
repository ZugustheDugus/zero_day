#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: least value of integer to print
 * @max: greatest value of integer to print
 *
 * Return: Either NULL or the array of strings
 */

int *array_range(int min, int max)
{
int *s;
int i, j, len;

if (min > max)
{
return (NULL);
}

len = (max - min) + 1;

s = malloc(sizeof(int) * len);
if (s == NULL)
{
return (NULL);
}
for (j = 0, i = min; i <= max; i++)
{
s[j] = i;
j++;
}
return (s);
}
