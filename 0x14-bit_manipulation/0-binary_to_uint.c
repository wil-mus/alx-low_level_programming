#include "main.h"

/**
 * binary_to_uint - function converting binary to unsigned int
 *
 * @b: pointer to strins of char 0 and 1
 *
 * Return: converted no else 0 or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	int a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		c = 2 * c + (b[a] - '0');
	}
	return (c);
}
