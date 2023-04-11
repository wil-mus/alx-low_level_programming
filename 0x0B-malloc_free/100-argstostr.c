#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to concatenate all program arguments
 *
 * @ac: argument numbers
 * @av: arguments array
 *
 * Return: NULL if ac is otherwise av to null
 */

char *argstostr(int ac, char **av)
{
	int a, b, total_len, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		while (av[a][len] != '\0')
		{
			len++;
			total_len++;
		}
		total_len++;
	}
	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		len = 0;

		while (av[a][len] != '\0')
		{
			str[b++] = av[a][len++];
		}
		str[b++] = '\n';
	}
	str[b] = '\0';
	return (str);
}
