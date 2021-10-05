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

i = *a;
j = *b;
*a = j;
*b = i;
}
