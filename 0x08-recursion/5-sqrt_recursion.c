#include "main.h"

/**
 * _sqrt_recursion - function to find natural square root of number
 *
 * @n: function paramater
 *
 * Return: -1 for n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int low = -1, high = n, mid, result;

		if (low <= high)
		{
			mid = (low + high) / 2;
			if (mid * mid == n)
			{
				return (mid);
			}
			else if (mid * mid < n)
			{
				low = mid + 1;
				result = mid;
			}
			else
			{
				high = mid - 1;
			}
		}
		return (result);
	}
}
