#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text_content: the text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr_bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[wr_bytes])
			wr_bytes++;

		wr_bytes = write(fd, text_content, wr_bytes);
		if (wr_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

