#include "main.h"

/**
 * _puts_recursion - Puts a string with recursion
 *
 * @s: The string being pointed to and puts'd
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
