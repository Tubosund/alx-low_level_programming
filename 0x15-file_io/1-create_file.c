

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - reads a text file and prints it to stdout
 * @filename: name of file to create
 * @text_content:content to write
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int writer, len = 0, written;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		len++;
	}

	writer = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (writer == -1)
		return (-1);

	if (text_content)
	{
		written = write(writer, text_content, len);
		if (written == -1 || written != len)
		{
			close(writer);
			return (-1);
		}
	}

	close(writer);
	return (1);
}
