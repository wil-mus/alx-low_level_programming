#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of a and b
 * 
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 *
 * Return: difference of a and b
 */				

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipliea a and b
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder of division of a by b
 *
 * Return: remainder of division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
