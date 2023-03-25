#include "main.h"

/**
 * print_number- prints integer
 *
 * @n: function paramater
 *
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10) 
	{
		print_number(n / 10);
	}
	_putchar(n %10 + '0');

}
