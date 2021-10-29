#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints a series of strings from main
 * @n: Number of arguments
 * @separator: Constant string for separating args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;

	if (separator == NULL)
		return;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%s", va_arg(s, const char *));
		}
		else
		{
		    printf("%s%s", va_arg(s, const char *), separator);
		}
	}
	printf("\n");
	va_end(s);
}
