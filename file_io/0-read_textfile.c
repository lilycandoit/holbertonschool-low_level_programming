#include "main.h"
#include "unistd.h"
#include "stdlib.h"
#include <sys/types.h>  /* for ssize_t */
#include <stddef.h>     /*  for size_t */
#include <fcntl.h> /* for open(), O_RDONLY, O_WRONLY, O_CREAT */


/**
 * read_textfile - to read text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters printed or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count; /* store number of bytes read/wrote */
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open file with read_only */
	fd = open(filename, O_RDONLY);

	/* if the file can't be open */
	if (fd == -1)
		return (0);

	/* allocate memory for buffer to hold the text with letters number of char */
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd); /*close the file */
		return (0);
	}

	/* read the text from file into buffer */
	read_count = read(fd, buffer, letters);
	/* if reading fails, clean up and return 0 */
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* then write the read content above to standard output */
	write_count = write(STDOUT_FILENO, buffer, read_count);

	/* if write fails or does not write all the read bytes */
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/*final clearn up */
	free(buffer);
	close(fd);

	return (write_count);
}



