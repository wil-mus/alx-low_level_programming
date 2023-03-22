#include "main.h"

/**
 * _abs - check for absolute value
 *
 * @r: Checked paramater
 *
 * Return: 0
 */

int _abs(int r)
{
	if (r < 0)
	r = -(r);
	else if (r >= 0)
		r = r;
	return (r);
}
