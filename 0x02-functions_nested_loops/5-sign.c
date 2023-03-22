#include "main.h"

/**
 *print_sign - print signs
 *
 * @n: paramater
 *
 *Return: 1, 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	_putchar('\n');
}
