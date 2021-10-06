#include "main.h"

/**
 * _puts - check the code
 * @str: string variable
 *
 */
void _puts(char *str)
{

while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
