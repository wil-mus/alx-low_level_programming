#include "main.h"

/**
 * _pow_recursion - function that return the value of x raised to power of y
 *
 * @x: value of variable
 * @y: value to be raised
 *
 * Return: -1 if value is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
