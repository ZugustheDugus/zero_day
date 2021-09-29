#include "main.h"
/**
 * print_alphabet - call to print_alphabet function in main.h file
 *
 * Return: this is what's supposed to be returned to main
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
