#include "main.h"
/**
 * _isalpha - The function being run in the 3-main.c file
 * @c: Description of parameter c
 * Return: Returns 1 if upper case, 0 if lower case
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
