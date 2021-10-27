#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: The array of integers
 * @size: size of the array
 * @action: points to a func to print an array as its iterated
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != 0 && size != 0)
{

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
