#include "main.h"

/**
 * factorial - functionto return factorial of number given
 *
 * @n: function paramater
 *
 * Return: -1, 1, or factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
