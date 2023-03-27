#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 *
 * @a: pointer inerger
 * @n: integer
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}
	if (i != n -1)
	printf("\n");
}
