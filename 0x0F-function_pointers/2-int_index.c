#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 *
 * @array: array
 * @size: no of elements in the array
 * @cmp: pointer to the function paramater
 *
 * Return: -1 if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
