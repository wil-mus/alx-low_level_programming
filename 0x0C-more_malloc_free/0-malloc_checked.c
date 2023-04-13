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

	while ( ptr == NULL)
	{
		ptr = malloc(b);
		if (ptr == NULL)
		{
			exit(98);
		}
	}
	return (ptr);
}
