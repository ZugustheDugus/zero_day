#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_all - func to print strings
 * @format: string to be printed
 */
void print_all(const char * const format, ...)
{
	const char *t;
	char *s;
	unsigned int i;
	double d;
	va_list zug;
	int len, index;
	len = (strlen(format) - 1);
	index = 0;
	va_start(zug, format);
	t = format;
	while (*t != '\0')
	{
		switch (*t)
		{
		case 'c':
			i = va_arg(zug, int);
			_putchar(i);
			break;
		case 'i':
			i = va_arg(zug, int);
			printf("%d", i);
			break;
		case 'f':
			d = va_arg(zug, double);
			printf("%f", d);
			break;
		case 's':
			s = va_arg(zug, char *);
			printf("%s", s);
			break;
		}
		if (index < len && (*t == 'i' || *t == 'c' || *t == 'f' || *t == 's'))
		{
			printf(", ");
		}
		index++;
		t++;
	}
	printf("\n");
}
