#include "main.h"

/**
 * _strcat - cancanate two strings
 * @dest: destination
 * @src: source
 *
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		dest[a] = src[a];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
