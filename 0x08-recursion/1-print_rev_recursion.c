#include "main.h"

/**
 * _print_rev_recursion - Function which prints a string in reverse
 *
 * @s: Variable to point to the string being reversed
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
