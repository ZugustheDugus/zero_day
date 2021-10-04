#include "main.h"

/**
 * print_line - function prints a line n number of times, or prints a newline
 *
 * @n: number of lines to print
 */
void print_line(int n)
{
_putchar(('_' * n) + '0');
_putchar('\n');
if (n <= 0)
{
_putchar('\n');
}
}
