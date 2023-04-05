#include "main.h"

/**
 * _strlen_recursion - returns lenght of string
 *
 * @s: pointer to string
 *
 * Return: 0 else the string lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
