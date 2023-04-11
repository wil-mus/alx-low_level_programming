#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function to create an array of chars and initialize it with specific char
 *
 * @size: array size
 * @c: char to initialize
 *
 * Return: NULL if size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		arr[a] = c;
	}
	return (arr);

}
