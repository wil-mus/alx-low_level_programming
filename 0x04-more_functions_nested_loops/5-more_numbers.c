#include "main.h"
#include <stdio.h>

/**
 * more_numbers- prints 10 times the number
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 15 ; b++)
		{
			if (b > 9)
			{
				putchar((b / 10) + '0');
			}
			putchar((b % 10) + '0');
		}
		putchar('\n');
	}
}
