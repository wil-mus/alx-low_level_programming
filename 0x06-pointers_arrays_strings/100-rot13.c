#include "main.h"

/**
 * rot13 - ebcode the string
 *
 * @str: string encoded
 *
 * Return: Pointer to string modifier
 */

char *rot13(char *str)
{
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0' && str[i] != in[j]; j++)
		;
		if (in[j] == str[i])
			str[i] = out[j];
	}
	return (str);
}
