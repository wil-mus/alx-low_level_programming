#include "main.h"
#include <string.h>

/**
 * _strspn - string prefix
 *
 * @s: number of bytes in initial segment
 * @accept: no of bytes to be returned
 *
 * Return: length of string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	unsigned int len = strlen(s);

	for (a = 0; a < len; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b] == '\0')
		{
			return (a);
		}
	}
	return (a);
}
