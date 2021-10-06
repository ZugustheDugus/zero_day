#include "main.h"

/**
 * puts2 - function called in the main
 *
 * @str: pointer to the string in the main function
 */
void puts2(char *str)
{
while (*str)
{
putchar(*str);
str++;
str++;
}
putchar('\n');
}
