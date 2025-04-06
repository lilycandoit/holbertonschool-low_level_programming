#include "fcntl.h"
#include "stdlib.h"
#include "unistd.h"

/**
 * create_file - to create a file and writes text content into it
 * @filename: the name of file
 * @text_content: the content to write
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}

	}

	close(fd);
	return (1);
}

