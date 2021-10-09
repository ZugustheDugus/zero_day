#include "main.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @ : space for generic char
 * Return: Always 0.
 */

char *string_toupper(char *)
{
int i;
char s[100];

for (i = 0 ; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
else if (s[i] >= 'A' && s[i] <= 'Z')
{
s[i] = s[i] + 32;
}
else
{
break;
}
}
printf("%s", s);
return (0);
}
