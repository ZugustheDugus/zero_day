#include "main.h"
/**
 * print_last_digit - check the code.
 * @n: the n thing that does the stuff
 * Return: of the king
 */
int print_last_digit(int n)
{
n = n % 10;
if (n >= 0)
{
_putchar('0' + n);
}
else if (n < 0)
{
n = n * -1;
_putchar('0' + n);
}
return (n);
}
