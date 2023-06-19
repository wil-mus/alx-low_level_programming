#include "main.h"
#include <stddef.h>

/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 *@n: paramater
 *
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t a;

	for (a = 0; a < (size_t)n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < (size_t)n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
