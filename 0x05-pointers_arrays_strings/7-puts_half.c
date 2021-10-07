#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: string
 */
void puts_half(char *str)
{
int i;
i = 1;
while (str[i] != '\0')
{
i++;
}
i = i / 2;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
