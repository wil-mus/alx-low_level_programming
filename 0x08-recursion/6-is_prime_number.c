#include "main.h"

/**
 * is_prime_number - function that checks for prime nummbers
 *
 * @n: fumction paramater
 *
 * Return: 1 if integer is prime number otherwise 0
 */

int is_prime_number(int n)
{
	int a = 5;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	while (a * a <= n)
	{
		if (n % a == 0 || n % (a + 2) == 0)
		{
			return (0);
		}
		a += 6;
	}
	return (1);
}
