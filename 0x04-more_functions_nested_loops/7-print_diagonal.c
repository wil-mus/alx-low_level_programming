#include "main.h"
#include <stdio.h>

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
		putchar('\n');
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
					putchar('\\');
				}
				else
				{
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}
