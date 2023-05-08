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
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

char *buffer = (char *) malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

ssize_t read_count = fread(buffer, sizeof(char), letters, file);
	if (read_count <= 0 || ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[read_count] = '\0';
ssize_t write_count = fwrite(buffer, sizeof(char), read_count, stdout);
	if (write_count != read_count)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (read_count);

}
