#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Operating function to add two integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of a + b
 */

int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Func to subtract two integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: int 1
 * @b: int 2
 * Return: result of a * b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divide two integers
 * @a: int 1
 * @b: int 2
 * Return: result of a / b
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - get the remainder of division of two ints
 * @a: int 1
 * @b: int 2
 * Return: Always a % b
 */

int op_mod(int a, int b)
{
return (a % b);
}
