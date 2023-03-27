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
	int b;

	while (str[a] != '\0')
	{
		for (b = 0; b < 10 && str[a] != '\0'; b++)
		{
			_putchar(str[a]);
			a += 2;
		}
	}
	_putchar('\n');
}
