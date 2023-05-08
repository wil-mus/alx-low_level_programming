#include "main.h"

/**
 * read_textfile -  reads a text file and prints to standard output
 *
 * @filename: text file being read
 * @letters: no of letters to be read
 *
 * Return: 0 if file can't open or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f;
	ssize_t a;
	ssize_t t;

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	t = read(f, buff, letters);
	a = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(f);
	return (a);

}
