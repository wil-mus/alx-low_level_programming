#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the variable previously allocated
 * @old_size: size in bytes
 * @new_size: new size in bytes
 *
 * Return: new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr) otherwise Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);

}
