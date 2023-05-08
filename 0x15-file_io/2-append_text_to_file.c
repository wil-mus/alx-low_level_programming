#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 *
 * @filename: name of file to apppend
 * @text_content: string to add at the end of file
 *
 * Return: 1 if file exis else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, ln = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write (a, text_content, ln);

	if (a == -1)
		return (-1);
	if (b == -1)
		return (-1);

	close(a);

	return (1);
}
