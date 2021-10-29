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
	char *t;
	va_list s;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		t = va_arg(s, char *);
		if (t != NULL)
		{
			printf("%s", t);
		}
		else
		{
			printf("(nil)");
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(s);
}
