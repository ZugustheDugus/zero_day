#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: of the king
 */
void times_table(void)
{
int a, b, z;
for (a = '0'; a <= '9'; a++)
{
_putchar('0');

for (b = '1'; b <= '9'; b++)
{
_putchar(',');
_putchar(' ');

z = a * b;

if (z <= '9')
{
_putchar(' ');
}
else
{
_putchar((z / 10) + '0');
}
_putchar('\n');
}
}
}
