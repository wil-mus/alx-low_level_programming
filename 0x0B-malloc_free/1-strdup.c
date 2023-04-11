#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to newly allocated memory space
 *
 * @str: string duplicated
 *
 * Return: pointer to new string otherwise returns NULL if str is null
 */

char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (size_t i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
