#include "main.h"

/**
 * print_line - function prints a line n number of times, or prints a newline
 *
 * @n: number of lines to print
 */
void print_line(int n)
{
int i;
for (i = 0 ; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
