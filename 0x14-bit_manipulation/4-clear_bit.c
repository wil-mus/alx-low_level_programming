#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return (-1);
	
	*n = (~(1UL << index) & *n);
	return (1);
}
