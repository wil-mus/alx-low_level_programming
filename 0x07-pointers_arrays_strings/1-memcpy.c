#include "main.h"

/**
 * _memcpy - copies 
 *
 * @dest: destination where content is copied
 * @src: source where data is copied from
 * @n: number of bytes copied
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
