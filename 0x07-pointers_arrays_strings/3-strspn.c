#include "main.h"

/**
 * _strspn - checks s for number of chars in accept
 * @s: The String to search for acceptable characters
 * @accept: The string which has acceptable characters
 * Return: Return the count of letters in s from accept list
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, k;
i = 0;
k = 0;
while (s[i])
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}
if (accept[j] == '\0')
{
break;
}
i++;
}
return (k);
}
