#include <stdio.h>

/**
 * main - posible combination of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int k;
	int l;

	for (k = 0 ; k < 10 ; k++)
	{
		for (l = 1 ; l < 10 ; l++)
		{
			if (k < l && k != l)
			{
				putchar(l + '0');
				putchar(k + '0');
				if (k + l != 14)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
