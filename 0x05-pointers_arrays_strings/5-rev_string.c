#include "main.h"
#include "string.h"
/**
 * rev_string - print string  in reverse
 * @s: string paramater
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char temp;

	for (int i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len -i -1] = temp;
	}
}
