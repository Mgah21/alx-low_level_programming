#include "main.h"

/**
 * create_file - insert file .
 * @filename: create name for file
 * @text_content: text content
 *
 * Return: return zero is sucess  or 1 or fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, p, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(file, text_content, l);

	if (file == -1 || p == -1)
		return (-1);

	close(file);

	return (1);
}
