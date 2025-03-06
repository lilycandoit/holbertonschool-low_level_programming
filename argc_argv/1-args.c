#include "stdio.h"

/**
* main - to print the number of arguments passed into it
* @argc: Argument count (unused)
* @argv: Arguments ifselves (array of strings)
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argv;
	/* argv is unused, so we use void */
	/* to ignore the unused variable warning */

	printf("%d\n", argc - 1); /* print the number of arguments */
	return (0);
}
