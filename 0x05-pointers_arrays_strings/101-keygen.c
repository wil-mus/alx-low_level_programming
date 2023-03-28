#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry
 * password_length - password
 * charset_size - size
 *
 * Return: 0
 */

int main(void)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_size = sizeof(charset) - 1;
	const int password_length = 12;
	int i;

	srand(time(NULL));
	printf("Random password:");

	for (i = 0; i < password_length; i++)
	{
		int random_index = rand() % charset_size;

		putchar(charset[random_index]);
	}
	putchar('\n');
	return (0);
}
