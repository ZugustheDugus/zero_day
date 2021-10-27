#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - index an array and compare
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to function which compares arrays
 * Return: i if the size and array are not 0, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
if (size <= 0)
{
return (-1);
}
return (-1);
}
