#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that iterates through an array
 *
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
