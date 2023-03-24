#include "main.h"

/**
 * _isupper- function to print uppercase character
 *
 * @c: function paramater
 *
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
