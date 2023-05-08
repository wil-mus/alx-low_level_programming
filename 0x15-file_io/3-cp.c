#include "main.h"

/**
 * print_error - prints an error
 *
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

void print_usage()
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

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
 * main - copies content
 *
 * @argc: no of arguments
 * @argv: array pointer to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	const char *f_fr;
	const char *f_to;
	int fd_fr, fd_to;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (argc != 3)
	{
		print_usage();
		return (97);
	}

	f_fr = argv[1];
	f_to = argv[2];

	fd_fr = open(f_fr, O_RDONLY);

	if (fd_fr == -1)
	{
		print_error(f_fr);
		return (98);
	}

	fd_to = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(f_to);
		close(fd_fr);
		return (99);
    }

	buffer = create_buffer();
       
	while ((bytesRead = read(fd_fr, buffer, BUFFER_SIZE)) > 0) {
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

	return (0);
}
