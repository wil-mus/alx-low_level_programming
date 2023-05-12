#include "main.h"

/**
 * print_error - prints an error
 *
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

/**
 * print_usage - prints usage
 */
void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * create_buffer - creates a buffer
 */

char *create_buffer()
{
	char *buffer = malloc(BUFFER_SIZE * sizeof(char));

	if (buffer == NULL)
	{
		print_error("Failed to allocate buffer");
		exit(99);
	}
	return (buffer);
}

/**
 * close - closes
 *
 * @fd_fr: from
 * @fd_to: to
 */

void close(int fd_fr, int fd_to)
{
	if (close(fd_fr) == -1)
	{
		print_error("Can't close file_from");
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		print_error("Can't close file_to");
		exit(100);
	}
}

/**
 * copy_file - copies file
 *
 * @f_fr: file from
 * @f_to: file to
 *
 * Return: 0
 */

void copy_file(const char *f_fr, const char *f_to)
{
	int fd_fr, fd_to;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	fd_fr = open(f_fr, O_RDONLY);

	if (fd_fr == -1)
	{
		print_error(f_fr);
		return (98);
	}

	fd_to = open(f_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(f_to);
		close(fd_fr);
		return (99);
	}

	buffer = create_buffer();

	while ((bytesRead = read(fd_fr, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);

		if (bytesWritten == -1)
		{
			print_error(f_to);
			free(buffer);
			close(fd_fr);
			close(fd_to);
			return (99);
		}
	}

	if (bytesRead == -1)
	{
		print_error(f_fr);
		free(buffer);
		close(fd_fr);
		close(fd_to);
		return (98);
	}

	free(buffer);
	close(fd_fr);
	close(fd_to);

/**
 * main - entry
 *
 * @argc: arguments
 * @argv: array arguments
*/
int main(int argc, char *argv[])
{
	const char *f_fr;
	const char *f_to;

	if (argc != 3)
	{
		print_usage();
		return (97);
	}

	f_fr = argv[1];
	f_to = argv[2];
	
	copy_file(f_fr, f_to);

	return (0);
}
