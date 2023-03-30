#include "main.h"

/**
 * string_toupper- changes the letter cases
 *
 * @str: paramater
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 32;
		}
		p++;
	}
	return (str);
}
