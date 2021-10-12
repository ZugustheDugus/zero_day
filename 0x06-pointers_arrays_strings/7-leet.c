#include "main.h"

/**
 * leet - Converts chars in array a to chars in array b when detected
 * @s: String assigned to s and pointed to in the main.c
 * Return: Returns the value of the string
 */

char *leet(char *s)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0 ; s[i] ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
if (a[j] == s[i])
{
s[i] = b[j];
}
}
}
return (s);
}
