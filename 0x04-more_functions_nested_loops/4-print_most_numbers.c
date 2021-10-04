#include "main.h"

/**
 * print_most_numbers - function to print all digits, except 2 and 4
 *
 *
 */

void print_most_numbers(void)
{
int c;
for (c = '0' ; c <= '9' ; c++)
{
_putchar(c);
if (c == '1' || c == '3')
{
c++;
}
}
_putchar('\n');
}
