#include "main.h"

/**
 * reverse_array - Reverses an array pointed to by a
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 */

void reverse_array(int *a, int n)
{
int i, j, t;
j = 0;
for (i = 0, j = n - 1 ; i < j ; i++, j--)
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
