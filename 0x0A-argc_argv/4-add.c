#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry
 *
 * @argc: no of arguments
 * @argv: pointer to array arguments
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int a, b, sum, num;

	if(argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[a]);
		if (num <= 0)
		{
			continue;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
