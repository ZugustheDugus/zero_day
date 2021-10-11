#include "main.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @s: String to convert
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
