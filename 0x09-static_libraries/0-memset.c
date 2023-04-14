#include "main.h"

/**
 * _memset - fill a memory with a specific value
 * @s: starting address
 * @b: desired value
 * @n: no of bytes
 *
 * Return: changed array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
