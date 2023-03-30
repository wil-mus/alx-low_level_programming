#include "main.h"
#include <string.h>

/**
 * infinite_add - add numbers
 * @n1: first paramater
 * @n2: second paramater
 * @r: third paramater
 * @size_r: paramater
 *
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;
	int len_r;

	r[k--] = '\0';

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		carry = sum / 10;

		if (k >= 0)
		{
			r[k] = (sum % 10) + '0';
			k--;
		}
		else if (carry != 0)
		{
		return (0);
		}
	}
	if (carry != 0)
	{
		return (0);
	}

	len_r = size_r - k - 1;

	memmove (r, &r[k + 1], len_r);

	return (r);
}
