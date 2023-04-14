#include "main.h"
#include <string.h>

/**
 * _strpbrk - locate first occurance of string
 *
 * @s: string 
 * @accept: bytes in string
 *
 * Return: pointer to byte s if it matches else NULL if no bytes found
 */

char *_strpbrk(char *s, char *accept)
{
	char *a, *b;

	for (a = s; *a != '\0';  a++)
	{
		for (b = accept; *b != '\0'; b++)
		{
			if (*a == *b)
			{
				return (a);
			}
                }
	}
	return (NULL);
}
