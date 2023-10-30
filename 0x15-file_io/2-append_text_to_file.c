#include "main.h"

/**
 * append_text_to_file - uses append text .
 * @filename: name for file.
 * @text_content: wrote the text
 * Return: return zero is sucsess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, e, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	e = write(k, text_content, l);

	if (k == -1 || e == -1)
		return (-1);

	close(k);

	return (1);
}
