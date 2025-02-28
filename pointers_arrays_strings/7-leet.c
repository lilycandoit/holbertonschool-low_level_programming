#include "main.h"

/**
* leet - to encode the string into 1337
*
* @str: the string to be encoded
*
* Description: not using more than 2 if, tenary opperator
* using mapping instead with 2 arrays (letters - numbers)
* then loop through the string and map the corresponding value
*
* Return: a pointer to a string
*/

char *leet(char *str)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL"; /* characters to replace */
	char numbers[] = "4433007711"; /* corresponding replacements*/

	while (str[i] != '\0')
	{
		int replaced = 0; /* false */
		/* put it inside while loop to reset value for each character */

		for (j=0; letters[j] != '\0' && !replaced; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				replaced = 1; /* stop checking further */
			}
		}
		i++;
	}

	return (str);
}

