#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 (success)
 */

int main(void)
{
	int m;
	int n;
	int o;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			for (o = 2 ; o < 10 ; o++)
			{
				if (m < n && n < o)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (m + n + o != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
