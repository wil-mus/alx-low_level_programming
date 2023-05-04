#include "main.h"

/**
 * get_endanness - checks the endianness
 *
 * Returns: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
