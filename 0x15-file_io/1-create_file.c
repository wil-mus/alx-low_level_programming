#include "main.h"

/**
 * create_file - fuunction to create a file
 *
 * @filename: name of the file to create
 * @text_content: string to write the file
 *
 * Return: 1 on success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, a, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
		ln++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(f, text_content, ln);

	if (f == -1 || a == -1)
	{
		return (-1);
	}

	close(f);

	return (1);

}
