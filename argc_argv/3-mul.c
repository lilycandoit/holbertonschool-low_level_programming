#include "stdio.h"
#include <stdlib.h>

/**
* main - to multiply 2 numbers
* @argc: Argument count
* @argv: Arguments ifselves (array of strings)
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3) /* assume there are 2 arguments provided */
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

