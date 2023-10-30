#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read file in c compiler.
 * @filename: read a file name
 * @letters: a to z
 * Return: return w If success
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t v;
	ssize_t u;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	u = read(file, buffer, letters);
	v = write(STDOUT_FILENO, buffer, u);

	free(buffer);
	close(file);
	return (v);
}
