#include "main.h"
/**
 * print_alphabet_x10 - check the code
 *
 * no return since void
 */
void print_alphabet_x10(void)
{
int it;
char ch;
for (it = 0 ; it < 10 ; it++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
