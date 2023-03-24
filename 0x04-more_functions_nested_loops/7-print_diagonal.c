#include "main.h"

/**
 * print_diagonal- print diogonal line
 *
 * @n: function paramater
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1 ; a <= 10 ; a++)
		{
			for (b = 1 ; b <= a ; b++)
			{
			_putchar('\\');
			}
			_putchar('\n');
			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
