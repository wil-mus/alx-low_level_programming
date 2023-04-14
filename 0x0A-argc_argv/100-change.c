#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * @argc: no of arguments
 * @argv: pointer to argument array
 *
 * Return:
 */

int main (int argc, char *argv[])
{
	int cents, coins, num_coin_value, a;
	int coin_value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	num_coin_value = sizeof(coin_value) / sizeof(coin_value[0]);

	for (a = 0; a < num_coin_value; a++)
	{
		while (cents >= coin_value[a])
		{
			coins += 1;
			cents -= coin_value[a];
		}
	}
	printf("%d\n", coins);
	return 0;
}
