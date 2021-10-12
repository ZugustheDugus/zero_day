#include "main.h"

/**
 * _puts_recursion - Puts a string with recursion
 *
 * @s: The string being pointed to and puts'd
 */

void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
