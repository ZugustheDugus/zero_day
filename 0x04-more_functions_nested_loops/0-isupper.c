#include "main.h"
/**
 * _isupper - function to check if the letter is uppercase.
 * @c: variable being checked for case
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
