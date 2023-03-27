#include "main.h"

/**
 * print_rev- prints strings in reverse
 * @s: function paramater
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while(s[len] != '\0')
	{
		len++;
	}
	for (int a = len - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
