#include "main.h"
#include <stdio.h>

/**
 * _puts- prints strings
 * @str: strings
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
