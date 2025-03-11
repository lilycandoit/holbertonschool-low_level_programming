#include "stdlib.h"
#include "stdio.h"

/**
 * _isdigit - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if(*s < '0' || *s > '9')
			return (0); /* not a digit */
		s++;
	}
	return (1); /* all characters are digit */
}

/**
* error_exit - print error message and exit
*/
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Entry point for multiplication program
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* check if provide exact 2 arguments */
	if (argc != 3)
		error_exit();

	/* check if contain only digits */
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
		error_exit();

	/* convert string into integer and multiply */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("Result: %d\n", result);

	return (0);
}