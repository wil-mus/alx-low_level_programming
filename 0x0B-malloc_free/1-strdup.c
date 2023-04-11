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

	len = strlen(str);

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);

	return (dup);
}
