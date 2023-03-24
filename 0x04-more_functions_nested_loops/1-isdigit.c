#include "main.h"

/**
 * _isdigit- checks for a digit
 *
 * @c: function paramater
 *
 * Return: 0 (success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
