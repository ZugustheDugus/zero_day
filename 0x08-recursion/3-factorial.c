#include "main.h"

/**
 * factorial - Gets the factorial of a number
 * @n: The integer being factorial'd
 * Return: Returns either 0 or the factorial of n
 */

int factorial(int n)
{
if (n <= 1 && n > -1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
