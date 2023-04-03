#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 *
 * @a: function paramater
 * @size: size of diagonal
 *
 */

void print_diagsums(int *a, int size)
{
	int b;
	int sum1 = 0;
	int sum2 = 0;

	for ( b = 0; b < size; b++)
	{
		sum1 += *(a + b * size + b);
		sum2 += *(a + b * size + (size - b - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
