#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 *
 * @b: integer to be checked
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	while ((ptr = malloc(b)) == NULL)
	{
		exit(98);
	}
	return (ptr);
}
