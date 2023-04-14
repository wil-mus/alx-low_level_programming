#include "main.h"

/**
 * _memcpy - function that copies the memory area
 * @dest: memory stored
 * @src: memory where copied
 * @n: no of bytes
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for ( ; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
