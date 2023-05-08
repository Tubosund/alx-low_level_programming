#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile -  reads a text file and prints it the output
 * @filename: name of file to read
 * @letters: the number of letters it should read and print
 *
 * Return: always zero
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	read_bytes = read(file, buffer, letters);
	if (read_bytes == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || (size_t) write_bytes != (size_t) read_bytes)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);

	return (read_bytes);
}
