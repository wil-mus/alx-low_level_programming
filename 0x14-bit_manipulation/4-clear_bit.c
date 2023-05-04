#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 *
 * @n: pointer of no to change
 * @index:index of bit cleared
 *
 * Return: on success 1 else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
