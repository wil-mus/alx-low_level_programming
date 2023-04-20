#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of argument types passed
 */

void print_all(const char * const format, ...)
{
	char *str;
	int i;
	char c;
	unsigned int b;
	char *sep = "";
	double d;

	va_list args;

	va_start(args, format);

	b = 0;

	while (format && format[b])
	{
		switch (format[b])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%s%d", sep, i);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%s%f", sep, d);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep);
				}
				else
				{
					printf("%s%s", sep, str);
				}
				break;
		}
		sep = ", ";
		b++;
	}
	printf("\n");
	va_end(args);
}
