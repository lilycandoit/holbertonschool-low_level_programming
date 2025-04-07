#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * close_file - Entry point
 *
 * Description: close files
 * @fd: file to close
 * Return: void
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Entry point
 *
 * Description: close files
 * @from: file to copy from
 * @to: file to copy to
 * Return: void
 */

void copy_file(char *from, char *to)
{
	int r, w, fd_from, fd_to;
	char buffer[1024];

	fd_from = open(from, O_RDONLY);
	r = read(fd_from, &buffer, 1024);
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}

	fd_to = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}

	while (r > 0)
	{
		w = write(fd_to, &buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
		r = read(fd_from, &buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			exit(98);
		}
	}
	close_file(fd_to);
	close_file(fd_from);
}

/**
 * main - Entry point
 *
 * Description: copies content of file to new file
 * @argc: number of args passed
 * @argv: args passed as array of strings
 * Return: 1 if success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
