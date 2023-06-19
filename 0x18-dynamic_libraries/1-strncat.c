#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _strncat- link of strings
 * @dest: destination
 * @src: source string
 * @n:no of bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t a;

	for (a = 0; a < (size_t)n && src[a] != '\0'; a++)
	{
		dest[dest_len + a] = src[a];
	}
	dest[dest_len + a] = '\0';
	return (dest);
}
