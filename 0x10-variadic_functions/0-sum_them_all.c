#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  sum_them_all - function to return all of its paramaters
 *
 *  @n: no of paramaters passed to function
 *  @...: variable no of paramaters to calculate the sum
 *
 *  Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a, sum = 0;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
