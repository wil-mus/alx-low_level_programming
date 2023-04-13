#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @: no of bytes
 *
 * Return: NULL otherwise pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1_len, s2_len, result_len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	result_len = s1_len + ( n < s2_len ? n : s2_len);

	result = malloc(result_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, result_len - s1_len);
	result[result_len] = '\0';

	return (result);
}
