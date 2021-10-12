#include "main.h"

/**
 * _strlen_recursion - Outputs the length of string using recursion
 * @s: The String whose length is being pointed to and returned
 * Return: Either returns 0 or the length of the string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return 1 + _strlen_recursion(s + 1);
}
}
