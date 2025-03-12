#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* is_digit - Checks if a string contains only digits
* @s: The string to check
* Return: 1 if only digits, 0 otherwise
*/

int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0); /* not digit and end loop*/

		s++;
	}
	return (1); /* true - all are digits */
}

/**
* main - Multiplies two positive numbers given as arguments
* @argc: Argument count
* @argv: Argument vector (input strings for numbers)
* Return: 0 on success, 98 on error
*/

int main(int argc, char *argv[])
{
	int len1, len2, i, j;
	int *result = NULL; /* array to store intermidiate results */

	/* check invalid inputs */
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	/* get length of both inputs */
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	/* allocate memory for result array */
	/* max-length = sum of input lengths */
	/* and should use calloc to initialize result = 0 */
	result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* do manual multiplication - like gradeschool */
	for (i = len1 - 1; i >=0; i--) /* loop through 1st input */
	{
		for (j = len2 -1; j >= 0; j--) /* loop through 2nd input*/
		{
			/* convert characters into integers */
			int mul = (argv[1][i] - '0') * (argv[2][j] - '0');

			/* add mul to the current position */
			int sum = mul + result[i + j + 1];

			/* store the last digit */
			result[i + j + 1] = sum % 10;

			/* store the carry-over for next index */
			result[i+j] += sum / 10;
		}
	}
	/* print the result - skip leading Zeros */
	i = 0;
	while (i < (len1 + len2) && result[i] == 0) /* skip all leading 0 */
		i++;

	/* edge case: if all the digits are zero, print a single 0 */
	if (i == len1 + len2)
	{
		printf("0\n");
		free(result);
		return(0);
	}

	/*/ print actual mul result */
	while (i < (len1 + len2))
	{
		printf("%d", result[i]);
		i++;
	}

	printf("\n");

	/* free allocated memory */
	free(result);

	return (0);
}