#include "main.h"

/**
 * _strlen - check the code
 * Return: Returns the strlen
 * @s: pointer to *str
 */

int _strlen(char *s)
{
int i;
i = *s;
while (s[i] != '\0')
{
i++;
}
return (i);
}
