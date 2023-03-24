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

		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b <= a ; b++)
			{
				if (b == a)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
