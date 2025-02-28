#include "main.h"

/**
* cap_string - to capitalize first letter of each word in a cap_string
*
* @str: the string to be capitalized
*
* Desription: capitalize first letter of each word in a cap_string
* if a separator found, then the next character will be capitalized
*
* Return: a pointer to new appended string
*/

char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";
	int is_start = 1; /* flag to check if it is at start of word */

	while (str[i] != '\0')
	{
		/* check if the current character is a separator */
		int is_separator = 0;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1; /* if found separator */
				break; /* then exit loop early*/
			}
		}

			if (is_separator)
			{
				is_start = 1;
			}
			else if (is_start && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32; /* convert to uppercase */
				is_start = 0; /* reset flag after capitalizing */
			}
			else
			{
				is_start = 0;
			}

			i++;
	}

	return (str);
}
