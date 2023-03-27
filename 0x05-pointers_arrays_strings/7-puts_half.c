#include "main.h"
#include "string.h"

/**
 *  puts_half - prints half string
 *
 *  @str: strings
 *
 *  Return: 0
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int start;
	int a;

	if (len % 2 != 0)
	{
		start = (len + 1) / 2;
	}
	else
	{
		start = len / 2;
	}
	for (a = start; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
