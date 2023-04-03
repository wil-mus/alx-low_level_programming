#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr - first occurance of substing
 *
 * @haystack: occurance string
 * @needle: second string
 *
 * Return: pointer to the begining of located substring else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return (haystack);
	}
	for (a = 0; a<= (haystack_len - needle_len); a++)
	{
		if (strncmp(&haystack[a], needle, needle_len) == 0)
		{
			return (&haystack[a]);
		}
	}
	return (NULL);
}
