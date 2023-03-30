#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: function paramater
 *
 */

void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div  *= 10;
	}
	while (div > 0)
	{
		_putchar((n / div) % 10 + '0');
		div /= 10;
	}
}
