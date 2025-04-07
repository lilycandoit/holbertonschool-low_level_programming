#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
* open_file_to - opens a file for writing
* @filename: name of the file to open
*
* Return: file descriptor of the opened file
*/
int open_file_to(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
* copy_content - copies content from one file to another
* @fd_from: file descriptor of the source file
* @file_from: name of the source file
* @file_to: name of the destination file
*
* Return: void
*/
void copy_content(int fd_from, const char *file_from, const char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written, total_written;
	int fd_to;

	/* Try reading first */
	bytes_read = read(fd_from, buffer, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* only open the destionation file if reading worked */
	fd_to = open_file_to(file_to);

	/*  Write the first read chunk */
	total_written = 0;
	while (total_written < bytes_read)
	{
		bytes_written = write(fd_to, buffer + total_written, bytes_read- total_written);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		total_written += bytes_written;
	}

	/* Continue with the rest of the file */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		total_written = 0;

		while (total_written < bytes_read)
		{
			bytes_written = write(fd_to, buffer + total_written, bytes_read - total_written);
			if (bytes_written == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
			total_written += bytes_written;
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_file(fd_to);
}