#include "main.h"

/**
 * swap_int- swaps integer values
 *
 * @a: first integer
 * @b: second integer
 * 
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
