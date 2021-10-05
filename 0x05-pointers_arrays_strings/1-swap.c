#include "main.h"

/**
 * swap_int - check the code
 * @a: variable for a
 * @b: variable for b
 */

void swap_int(int *a, int *b)
{
int i;
int j;

i = 98;
j = 42;
*b = 42;
*a = 98;
*b = i;
*a = j;
}
