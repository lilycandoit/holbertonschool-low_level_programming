#include "stdio.h"

/**
* main - to print the program name
* @argc: Argument count (unused)
* @argv: Arguments ifselves (array of strings)
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	(void)argc;
	/* argc is unused, so we use void */
	/* to ignore the unused variable warning */

	printf("%s\n", argv[0]); /* print the program name */
	return (0);
}
