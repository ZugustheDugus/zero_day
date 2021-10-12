#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word w/ word separators
 * @s: Assignment of the char to the string / the string being pointed to
 * Return: Returns the String
 */

char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}"; /* word seperators */
i = 1;
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
while (s[i])
{
for (j = 0 ; sep[j] != '\0' ; j++)
{
if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
}
i++;
}
return (s);
}
