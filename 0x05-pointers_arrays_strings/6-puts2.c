#include "main.h"

/**
 * puts2-  prints every character of a string
 *
 * @str: string paramater
 *
 * Return: 0
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
