#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concatenate two strings
 *
 * @s1: first string
 * @s2: string 2
 *
 * Return: ppointer of cancatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t s1_len = 0;
	size_t s2_len = 0;
	char *result;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
		{
			s1_len++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
		{
			s2_len++;
		}
	}
	result = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		memcpy(result, s1, s1_len);
	}
	if (s2 != NULL)
	{
		memcpy(result + s1_len, s2, s2_len);
	}
	result[s1_len + s2_len] = '\0';
	return (result);
}
