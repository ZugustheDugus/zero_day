#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all its parameters
 * @n: number of parameters to add
 * Return: 0 or res
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i;
	va_list s;

	va_start(s, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 1; i <= n; i++)
	{
		res += va_arg(s, int);
	}
	va_end(s);
	return (res);
}
