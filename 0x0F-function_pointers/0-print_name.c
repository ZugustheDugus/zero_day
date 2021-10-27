#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - function to point to a function that prints a name
 * @name: name of the person
 *
 * Return: NULL if name or f is NULL
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
