#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"

/**
* main - to add positive numbers
* @argc: Argument count
* @argv: Arguments ifselves (array of strings)
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	for (i = 1; i < argc; i++) /* loop through each argument - a string */
	{
		/* check if the argument is entirely numeric */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* convert the argument into int, then add to result */
		result = result + atoi(argv[i]);
	}
	/* print final result */
	printf("%d\n", result);
	return (0);
}

