#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * mul - funcion to mutlipy
 * @num1: first number
 * @num2: second number
 *
 * Return: product of two numbers
 */

int mul(const char *num1, const char *num2)
{
	int a, b, len1, len2, carry, product, result_len;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);

	result_len = len1 + len2;
	result = calloc(result_len, sizeof(int));

	if (!result)
	{
		return (-1);
	}
	for (a = len1 - 1; a >= 0; a--)
	{
		if (!isdigit(num1[a]))
		{
			free(result);
			return (-1);
		}
		carry = 0;
		for (b = len2 - 1; b >= 0; b--)
		{
			if (!isdigit(num2[b]))
			{
				free(result);
				return (-1);
			}
			product = (num1[a] - '0') * (num2[b] - '0') + carry + result[a + b + 1];
			result[a + b + 1] = product % 10;
			carry = product / 10;
		}
		result[a + b + 1] += carry;
	}
	while (*result == 0 && result_len > 1)
	{
		result++;
		result_len--;
	}
	for (a = 0; a < result_len; a++)
	{
		printf("%d", result[a]);
	}
	printf("\n");
	free(result);
	return (0);
}
