#include "main.h"

/**
 * print_binary - prints binary represantation of a number
 *
 * @n: no to print binary
 */

void print_binary(unsigned long int n)
{
	int s = 0;

	while ((n >> s) > 0)
	{
		s++;
	}
	s--;
	if (s < 0)
	{
		_putchar('0');
	}
	else
	{
		while (s >= 0)
		{
			if ((n >> s) & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
			s--;
		}
	}
}
