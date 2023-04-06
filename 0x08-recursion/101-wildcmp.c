#include "main.h"

/**
 * wildcmp - function to compare two strings
 *
 * @s1: first string
 * @s2: string 2
 *
 * Return: 1 if strings are identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 != '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
