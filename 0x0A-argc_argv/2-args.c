#include <stdio.h>

/**
 * main - Entry
 *
 * @argc: no of arguments
 * @argv: pointer to array arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
