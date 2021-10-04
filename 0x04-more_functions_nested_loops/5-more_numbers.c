#include "main.h"

/**
 * more_numbers - print more numbers than just 0-9 but print 0-14
 *
 *
 */

void more_numbers(void)
{
int c;
int d;
for (d = '0' ; d <= '9' ; d++)
{
for (c = 0 ; c <= 14 ; c++)
{
if (c >= 10)
{
_putchar((c / 10) + '0');
}
_putchar((c % 10) + '0');
}
_putchar('\n');
}
}
