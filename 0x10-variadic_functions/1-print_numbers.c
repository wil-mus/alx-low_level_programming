#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: integers passed
 * @...: number to be printed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && a != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");

}
