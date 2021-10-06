#include "main.h"

/**
 * print_rev - check the code
 * @s: variable pointed to
 * Return: Always 0.
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
putchar(*s);
s--;
}
putchar('\n');
}
