#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or an error code on failure
 */
void check_args(int argc);
int open_file_from(const char *filename);
void close_file(int fd);

int main(int argc, char *argv[])
{
	int fd_from;

	check_args(argc);

	fd_from = open_file_from(argv[1]);

	copy_content(fd_from, argv[1], argv[2]);

	close_file(fd_from);

	return (0);
}

/**
 * check_args - checks the number of arguments passed to the program
 * @argc: number of arguments
 *
 * Return: void
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file_from - opens a file for reading
 * @filename: name of the file to open
 *
 * Return: file descriptor of the opened file
 */
int open_file_from(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to close
 *
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

