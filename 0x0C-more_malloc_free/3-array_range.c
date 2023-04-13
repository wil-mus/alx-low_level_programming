#include "main.h"
#include <stdlib.h>

/**
 * array_range - function to create array of integers
 *
 * @min: minimum value range
 * @max: maximum value range
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr, a;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (max - min + 1); a++)
	{
		arr[a] = min + a;
	}
	return (arr);
}
