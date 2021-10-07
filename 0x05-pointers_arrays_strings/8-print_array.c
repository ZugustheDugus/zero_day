#include "main.h"

/**
 * print_array - function to print the elements of an array in the main
 * @a: pointer to the array elements
 * @n: integer to index each element of the array
 */
void print_array(int *a, int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
printf("%d", a[i]);
if (i < (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
