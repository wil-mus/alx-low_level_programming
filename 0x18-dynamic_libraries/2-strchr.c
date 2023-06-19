#include "main.h"
#include <stddef.h>
/**
 * _strchr - string character
 *
 * @s: string if characters
 * @c: first occurance of character
 *
 * Return: NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (NULL);
}
