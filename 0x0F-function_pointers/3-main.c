#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entrry point
 * 
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num1, num2, result;
	char *operator;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);
}
