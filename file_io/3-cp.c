#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void check_args(int argc);
int open_file_from(const char *filename);
int open_file_to(const char *filename);
void copy_content(int fd_from, const char *file_from, const char *file_to);
void close_file(int fd);

int main(int argc, char *argv[])
{
    int fd_from;

    check_args(argc);

    fd_from = open_file_from(argv[1]);

    copy_content(fd_from, argv[1], argv[2]);

    close_file(fd_from);

    return 0;
}

void check_args(int argc)
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

int open_file_from(const char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        exit(98);
    }

    return fd;
}

int open_file_to(const char *filename)
{
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
        exit(99);
    }

    return fd;
}

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

void close_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

