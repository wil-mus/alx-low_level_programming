#include "main.h"

/**
 * print_triangle: print a triangle
 *
 * @size: size of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
