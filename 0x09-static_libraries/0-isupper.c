#include "main.h"

/**
 * _isupper - uppercase
 *
 * @c: character to check
 *
 * Return: 0 or 2
 */

int _isupper(int c)
{
	if (c > 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
