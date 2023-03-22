#include "main.h"

/**
 * positive_or_negative - check for positive or negative number
 *
 * @i: paramater check
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
