#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 *
 * @argc: count arguments
 * @argv: arguments of array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%d\n", **argv);
	return (0);
}
