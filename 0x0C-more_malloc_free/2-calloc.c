#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory of an array
 *
 * @nmemb: elements allocated to array memory
 * @size: size in bytes allocated to array
 *
 * Return: NULL if the malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	p = ptr;

	for (a = 0; a < nmemb * size; a++)
	{
		p[a] = 0;
	}
	return (ptr);
}
