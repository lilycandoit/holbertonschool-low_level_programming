#include "main.h"
#include "stdlib.h"

/**
* argstostr - concatenate all command arguments to string
* @ac: the number of arguments
* @av: the command arguments itself
*
* Return: A pointer to a new concatenated string
*/

char *argstostr(int ac, char **av)
{
	char *concat_str;
	int len = 0, index = 0, i, j;


	/* check invalid input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the length of the final string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++; /* count character in each argument */
		}

		len++; /* add a space for \n after each argument */
	}
	len ++; /* add space for null terminator */

	/* allocate the memory for the new string */
	concat_str = malloc(len * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	/* copy arg into string with \n after each arg */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat_str[index] = av[i][j];
			index++;
		}
		/* add a newlne after each argument */
		concat_str[index] = '\n';
		index++;
	}
	/* add null terminator at the final string */
	concat_str[index] = '\0';

	return (concat_str);
}

