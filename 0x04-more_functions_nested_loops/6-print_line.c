#include "main.h"
#include <stdio.h>

/**
 * print_line- draw a straight line
 *
 * @n: function paramater
 *
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int a;

		for (a = 0 ; a < n ; a++)
		{
		putchar('_');
		}
	}
	putchar('\n');
}
