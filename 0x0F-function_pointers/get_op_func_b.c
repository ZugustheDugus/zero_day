#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function to determine which operation used
 * @s: op passed as argument
 *
 * Return: either func or NULL
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (s[i])
{
if (s == ops)
{
return (s);
}
i++;
}
return (NULL);
}
