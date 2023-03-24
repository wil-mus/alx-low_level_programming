#include <stdio.h>
#include "math.h"

/**
 * main- Entry
 *
 * largest_factor- find number
 * Return: 0
 */

int main(void)
{
	long int n;
	long int m;
	long int max;

	n = 612852475143;
	max = -1;

	while(n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (m = 3; m <= sqrt(n); m = m + 2)
	{
		while (n % 2 == 0)
		{
			max = m;
			n = n / m;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);
	return (0);
}
