#include "main.h"
#include <string.h>

/**
 * _is_palindrome: check if the string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if string is pallindrome , 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	char *start = s;
	char *end = s + len -1;

	if (len == 0)
	{
		return (1);
	}
	if (start < end)
	{
		if (*start != *end)
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}
