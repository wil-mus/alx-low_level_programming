#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - function prototype
 *
 * @s: pointer to string
 * @to: where to set
 *
 */

void set_string(char **s, char *to)
{
	if (s == NULL)
	{
		return;
	}
	free(*s);

	if (to == NULL)
	{
		*s = NULL;
		return;
	}

	*s = malloc(sizeof(char) * (strlen(to) + 1));
	if (*s == NULL)
	{
		return;
	}
	strcpy(*s, to);
}
