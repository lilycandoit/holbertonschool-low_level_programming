#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, exits with error code on failure
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	/* check if number of arguments is wrong */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert input */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* get correct operation function */
	operation = get_op_func(argv[2]);

	/* if operation is invalid */
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* if checking all good, then do calculation */
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}

