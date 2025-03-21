#include "stdio.h"
#include "stdlib.h"

/**
* main - to print the opcodes of it owns function
* @argc: the number of command arguments
* @argv: the command arguments
* Return: 0 on success, exits with status 1 or 2 on errors
*/

int main(int argc, char *argv[])
{
	unsigned char *ptr;
	int num_bytes, i;

	/* check invalid input - must have 2 arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* convert the argument into integer */
	num_bytes = atoi(argv[1]);

	/* check if num_bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* get address of the main function */
	ptr = (unsigned char *)main;
	/* cast main address to a pointer */

	/* print the opcodes with hexadecimal format */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
		/* print each byte as 2 digits hexadecimal format */

		/* add space after each byte except the last one */
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
