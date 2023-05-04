#include "main.h"

/**
 * set_bit - sets value of bit to 1
 *
 * @n: pointer to the bit to change
 * @index: index of bit to set to 1
 *
 * Return: on success 1 else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index) | *n;
	return (1);
}
